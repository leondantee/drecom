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

// Function: entry_002d9ef8
// Address: 0x2d9ef8 - 0x2d9f90
void entry_002d9ef8_0x2d9ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d9ef8_0x2d9ef8");
#endif

    switch (ctx->pc) {
        case 0x2d9f48u: goto label_2d9f48;
        default: break;
    }

    ctx->pc = 0x2d9ef8u;

    // 0x2d9ef8: 0x920200d2  lbu         $v0, 0xD2($s0)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 210)));
    // 0x2d9efc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2d9efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9f00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9f04: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x2d9f04u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x2d9f08: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2d9f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2d9f0c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2d9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x2d9f10: 0x24428ae0  addiu       $v0, $v0, -0x7520
    ctx->pc = 0x2d9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937312));
    // 0x2d9f14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d9f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9f18: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2d9f18u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d9f1c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x2d9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2d9f20: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2d9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d9f24: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2d9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x2d9f28: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2d9f28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2d9f2c: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x2d9f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x2d9f30: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d9f34: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2d9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2d9f38: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x2d9f38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2d9f3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2d9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9f40: 0xc056abc  jal         func_15AAF0
    ctx->pc = 0x2D9F40u;
    SET_GPR_U32(ctx, 31, 0x2D9F48u);
    ctx->pc = 0x15AAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AAF0u, 0x2D9F40u, 0x2D9F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9F48u;
label_2d9f48:
    // 0x2d9f48: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x2d9f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9f4c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x2d9f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x2d9f50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9f50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f54: 0x0  nop
    ctx->pc = 0x2d9f54u;
    // NOP
    // 0x2d9f58: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2d9f58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2d9f5c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2d9f5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    // 0x2d9f60: 0xc6010088  lwc1        $f1, 0x88($s0)
    ctx->pc = 0x2d9f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d9f64: 0x3c0244bc  lui         $v0, 0x44BC
    ctx->pc = 0x2d9f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17596 << 16));
    // 0x2d9f68: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x2d9f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2d9f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f70: 0x0  nop
    ctx->pc = 0x2d9f70u;
    // NOP
    // 0x2d9f74: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2d9f74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d9f78: 0x0  nop
    ctx->pc = 0x2d9f78u;
    // NOP
    // 0x2d9f7c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x2D9F7Cu;
    {
        const bool branch_taken_0x2d9f7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d9f7c) {
            ctx->pc = 0x2D9F90u;
            return;
        }
    }
    ctx->pc = 0x2D9F84u;
    // 0x2d9f84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d9f84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d9f88: 0x0  nop
    ctx->pc = 0x2d9f88u;
    // NOP
    // 0x2d9f8c: 0xe6000088  swc1        $f0, 0x88($s0)
    ctx->pc = 0x2d9f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 136), bits); }
    ctx->pc = 0x2d9f90u;
}
