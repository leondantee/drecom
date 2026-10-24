#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_00243464
// Address: 0x243464 - 0x2434ec
void entry_00243464_0x243464(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00243464_0x243464");
#endif

    ctx->pc = 0x243464u;

    // 0x243464: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243468: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x243468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x24346c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x24346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x243470: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x243470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x243474: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x243474u;
    {
        const bool branch_taken_0x243474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243474) {
            ctx->pc = 0x243530u;
            return;
        }
    }
    ctx->pc = 0x24347Cu;
    // 0x24347c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24347cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x243480: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x243480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x243484: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x243484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x243488: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x243488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x24348c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24348cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x243490: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x243490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x243494: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x243494u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243498: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x243498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24349c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x24349cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2434a0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2434a4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2434a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2434a8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2434ac: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2434acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2434b0: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x2434b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2434b4: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x2434b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x2434b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2434bc: 0x0  nop
    ctx->pc = 0x2434bcu;
    // NOP
    // 0x2434c0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2434c0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2434c4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2434c8: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x2434c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2434cc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2434ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2434d0: 0x0  nop
    ctx->pc = 0x2434d0u;
    // NOP
    // 0x2434d4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2434D4u;
    {
        const bool branch_taken_0x2434d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2434d4) {
            ctx->pc = 0x2434ECu;
            return;
        }
    }
    ctx->pc = 0x2434DCu;
    // 0x2434dc: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x2434dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2434e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2434e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2434e4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2434e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2434e8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2434e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2434ecu;
}
