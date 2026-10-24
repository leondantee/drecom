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

// Function: entry_00238224
// Address: 0x238224 - 0x2382ac
void entry_00238224_0x238224(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238224_0x238224");
#endif

    ctx->pc = 0x238224u;

    // 0x238224: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238228: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x23822c: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x23822cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x238230: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x238230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x238234: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x238234u;
    {
        const bool branch_taken_0x238234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x238234) {
            ctx->pc = 0x2382F0u;
            return;
        }
    }
    ctx->pc = 0x23823Cu;
    // 0x23823c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23823cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x238240: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238244: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x238244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x238248: 0x3c0243c8  lui         $v0, 0x43C8
    ctx->pc = 0x238248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
    // 0x23824c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x23824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x238250: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x238250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x238254: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x238254u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x238258: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x238258u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23825c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x23825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238260: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x238260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238264: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x238264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x238268: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x23826c: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x23826cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x238270: 0xc4410010  lwc1        $f1, 0x10($v0)
    ctx->pc = 0x238270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x238274: 0x3c02442f  lui         $v0, 0x442F
    ctx->pc = 0x238274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17455 << 16));
    // 0x238278: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x238278u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23827c: 0x0  nop
    ctx->pc = 0x23827cu;
    // NOP
    // 0x238280: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x238280u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x238284: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x238284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x238288: 0xc4400124  lwc1        $f0, 0x124($v0)
    ctx->pc = 0x238288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23828c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x23828cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x238290: 0x0  nop
    ctx->pc = 0x238290u;
    // NOP
    // 0x238294: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x238294u;
    {
        const bool branch_taken_0x238294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x238294) {
            ctx->pc = 0x2382ACu;
            return;
        }
    }
    ctx->pc = 0x23829Cu;
    // 0x23829c: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x23829cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
    // 0x2382a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2382a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2382a4: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2382a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2382a8: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2382a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2382acu;
}
