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

// Function: entry_002ccec8
// Address: 0x2ccec8 - 0x2ccfb4
void entry_002ccec8_0x2ccec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ccec8_0x2ccec8");
#endif

    switch (ctx->pc) {
        case 0x2ccf14u: goto label_2ccf14;
        case 0x2ccf4cu: goto label_2ccf4c;
        case 0x2ccf84u: goto label_2ccf84;
        default: break;
    }

    ctx->pc = 0x2ccec8u;

    // 0x2ccec8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ccec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2ccecc: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x2cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x2cced0: 0x24502bc0  addiu       $s0, $v0, 0x2BC0
    ctx->pc = 0x2cced0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11200));
    // 0x2cced4: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2cced4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2cced8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2cced8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2ccedc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2ccedcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2ccee0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ccee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2ccee4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ccee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ccee8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CCEE8u;
    {
        const bool branch_taken_0x2ccee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ccee8) {
            ctx->pc = 0x2CCFB4u;
            return;
        }
    }
    ctx->pc = 0x2CCEF0u;
    // 0x2ccef0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x2ccef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccef4: 0x94620006  lhu         $v0, 0x6($v1)
    ctx->pc = 0x2ccef4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x2ccef8: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x2ccef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x2ccefc: 0xa4620006  sh          $v0, 0x6($v1)
    ctx->pc = 0x2ccefcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccf00: 0x96020140  lhu         $v0, 0x140($s0)
    ctx->pc = 0x2ccf00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x2ccf04: 0x3042fff7  andi        $v0, $v0, 0xFFF7
    ctx->pc = 0x2ccf04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65527);
    // 0x2ccf08: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x2ccf08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x2ccf0c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF0Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF14u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF0Cu, 0x2CCF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF14u;
label_2ccf14:
    // 0x2ccf14: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf18: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf1c: 0x0  nop
    ctx->pc = 0x2ccf1cu;
    // NOP
    // 0x2ccf20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf24: 0x3c02c348  lui         $v0, 0xC348
    ctx->pc = 0x2ccf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49992 << 16));
    // 0x2ccf28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf2c: 0x0  nop
    ctx->pc = 0x2ccf2cu;
    // NOP
    // 0x2ccf30: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccf30u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf34: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x2ccf34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccf38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf3c: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccf40: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2ccf40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2ccf44: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF44u;
    SET_GPR_U32(ctx, 31, 0x2CCF4Cu);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF44u, 0x2CCF4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF4Cu;
label_2ccf4c:
    // 0x2ccf4c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf54: 0x0  nop
    ctx->pc = 0x2ccf54u;
    // NOP
    // 0x2ccf58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf5c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x2ccf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
    // 0x2ccf60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf64: 0x0  nop
    ctx->pc = 0x2ccf64u;
    // NOP
    // 0x2ccf68: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccf68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf6c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x2ccf6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccf70: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccf70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccf74: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccf78: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2ccf78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x2ccf7c: 0xc067654  jal         func_19D950
    ctx->pc = 0x2CCF7Cu;
    SET_GPR_U32(ctx, 31, 0x2CCF84u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x2CCF7Cu, 0x2CCF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CCF84u;
label_2ccf84:
    // 0x2ccf84: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ccf84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
    // 0x2ccf88: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ccf88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ccf8c: 0x0  nop
    ctx->pc = 0x2ccf8cu;
    // NOP
    // 0x2ccf90: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2ccf90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ccf94: 0x3c02c316  lui         $v0, 0xC316
    ctx->pc = 0x2ccf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49942 << 16));
    // 0x2ccf98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ccf98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ccf9c: 0x0  nop
    ctx->pc = 0x2ccf9cu;
    // NOP
    // 0x2ccfa0: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x2ccfa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2ccfa4: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2ccfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ccfa8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2ccfa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2ccfac: 0x26020150  addiu       $v0, $s0, 0x150
    ctx->pc = 0x2ccfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x2ccfb0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x2ccfb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    ctx->pc = 0x2ccfb4u;
}
