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

// Function: entry_00263b24
// Address: 0x263b24 - 0x263b90
void entry_00263b24_0x263b24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263b24_0x263b24");
#endif

    switch (ctx->pc) {
        case 0x263b38u: goto label_263b38;
        default: break;
    }

    ctx->pc = 0x263b24u;

    // 0x263b24: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x263b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x263b28: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x263b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x263b2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x263b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263b30: 0xc098d00  jal         func_263400
    ctx->pc = 0x263B30u;
    SET_GPR_U32(ctx, 31, 0x263B38u);
    ctx->pc = 0x263400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x263400u, 0x263B30u, 0x263B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263B38u;
label_263b38:
    // 0x263b38: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x263b38u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x263b3c: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b40: 0xe46001bc  swc1        $f0, 0x1BC($v1)
    ctx->pc = 0x263b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 444), bits); }
    // 0x263b44: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x263b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b48: 0xc46101bc  lwc1        $f1, 0x1BC($v1)
    ctx->pc = 0x263b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b4c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x263b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x263b50: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263b54: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b58: 0x0  nop
    ctx->pc = 0x263b58u;
    // NOP
    // 0x263b5c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x263b5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x263b60: 0x0  nop
    ctx->pc = 0x263b60u;
    // NOP
    // 0x263b64: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x263B64u;
    {
        const bool branch_taken_0x263b64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x263b64) {
            ctx->pc = 0x263B90u;
            return;
        }
    }
    ctx->pc = 0x263B6Cu;
    // 0x263b6c: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x263b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x263b70: 0xc48101bc  lwc1        $f1, 0x1BC($a0)
    ctx->pc = 0x263b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x263b74: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x263b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x263b78: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x263b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x263b7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x263b7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x263b80: 0x0  nop
    ctx->pc = 0x263b80u;
    // NOP
    // 0x263b84: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x263b84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x263b88: 0xe48001bc  swc1        $f0, 0x1BC($a0)
    ctx->pc = 0x263b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 444), bits); }
    // 0x263b8c: 0x0  nop
    ctx->pc = 0x263b8cu;
    // NOP
    ctx->pc = 0x263b90u;
}
