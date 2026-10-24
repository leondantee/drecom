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

// Function: entry_002ccddc
// Address: 0x2ccddc - 0x2ccec8
void entry_002ccddc_0x2ccddc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ccddc_0x2ccddc");
#endif

    switch (ctx->pc) {
        case 0x2cce28u: goto label_2cce28;
        case 0x2cce60u: goto label_2cce60;
        case 0x2cce98u: goto label_2cce98;
        default: break;
    }

    ctx->pc = 0x2ccddcu;

    // 0x2ccddc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccde0: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2ccde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2ccde4: 0x24502580  addiu       $s0, $v0, 0x2580
    ctx->pc = 0x2ccde4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 9600));
    // 0x2ccde8: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x2ccde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccdec: 0x94a60006  lhu         $a2, 0x6($a1)
    ctx->pc = 0x2ccdecu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x2ccdf0: 0x6102b  sltu        $v0, $zero, $a2
    ctx->pc = 0x2ccdf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2ccdf4: 0x38440001  xori        $a0, $v0, 0x1
    ctx->pc = 0x2ccdf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccdf8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x2ccdf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x2ccdfc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCDFCu;
    {
        const bool branch_taken_0x2ccdfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccdfc) {
            ctx->pc = 0x2CCEC8u;
            return;
        }
    }
    ctx->pc = 0x2CCE04u;
    // 0x2cce04: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2cce04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce08: 0x94640006  lhu         $a0, 0x6($v1)
    ctx->pc = 0x2cce08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2cce0c: 0x34820003  ori         $v0, $a0, 0x3
    ctx->pc = 0x2cce0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2cce10: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2cce10u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cce14: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2cce14u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2cce18: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2cce18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2cce1c: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2cce1cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2cce20: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE20u;
    SET_GPR_U32(ctx, 31, 0x2CCE28u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE20u, 0x2CCE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE28u;
label_2cce28:
    // 0x2cce28: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cce30: 0x0  nop
    ctx->pc = 0x2cce30u;
    // NOP
    // 0x2cce34: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cce34u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cce38: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2cce38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2cce3c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cce3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce40: 0x0  nop
    ctx->pc = 0x2cce40u;
    // NOP
    // 0x2cce44: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cce44u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cce48: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2cce48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cce4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cce50: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cce50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce54: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2cce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2cce58: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE58u;
    SET_GPR_U32(ctx, 31, 0x2CCE60u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE58u, 0x2CCE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE60u;
label_2cce60:
    // 0x2cce60: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce64: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cce68: 0x0  nop
    ctx->pc = 0x2cce68u;
    // NOP
    // 0x2cce6c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2cce6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2cce70: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2cce70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2cce74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cce74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cce78: 0x0  nop
    ctx->pc = 0x2cce78u;
    // NOP
    // 0x2cce7c: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cce7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cce80: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2cce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cce84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2cce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2cce88: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cce88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cce8c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2cce8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2cce90: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCE90u;
    SET_GPR_U32(ctx, 31, 0x2CCE98u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCE90u, 0x2CCE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCE98u;
label_2cce98:
    // 0x2cce98: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2cce98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2cce9c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2cce9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccea0: 0x0  nop
    ctx->pc = 0x2ccea0u;
    // NOP
    // 0x2ccea4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccea8: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2ccea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2cceac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cceacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cceb0: 0x0  nop
    ctx->pc = 0x2cceb0u;
    // NOP
    // 0x2cceb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2cceb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cceb8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2cceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccebc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccebcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccec0: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccec4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2ccec8u;
}
