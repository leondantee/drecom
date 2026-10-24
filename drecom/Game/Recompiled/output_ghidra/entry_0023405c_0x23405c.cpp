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

// Function: entry_0023405c
// Address: 0x23405c - 0x2340ac
void entry_0023405c_0x23405c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0023405c_0x23405c");
#endif

    ctx->pc = 0x23405cu;

    // 0x23405c: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x23405cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234060: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x234060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234064: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x234064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x234068: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x234068u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x23406c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x23406cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x234070: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x234070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234074: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x234074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234078: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x234078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23407c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x23407cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x234080: 0x0  nop
    ctx->pc = 0x234080u;
    // NOP
    // 0x234084: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x234084u;
    {
        const bool branch_taken_0x234084 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234084) {
            ctx->pc = 0x2340ACu;
            return;
        }
    }
    ctx->pc = 0x23408Cu;
    // 0x23408c: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x23408cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x234090: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x234090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x234094: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x234094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x234098: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x234098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x23409c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x23409cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2340a0: 0x0  nop
    ctx->pc = 0x2340a0u;
    // NOP
    // 0x2340a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2340a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2340a8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2340a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    ctx->pc = 0x2340acu;
}
