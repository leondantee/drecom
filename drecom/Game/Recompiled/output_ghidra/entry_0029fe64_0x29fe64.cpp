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

// Function: entry_0029fe64
// Address: 0x29fe64 - 0x2a00b8
void entry_0029fe64_0x29fe64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029fe64_0x29fe64");
#endif

    switch (ctx->pc) {
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fec0u: goto label_29fec0;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed8u: goto label_29fed8;
        case 0x29ff90u: goto label_29ff90;
        case 0x29ffc8u: goto label_29ffc8;
        case 0x2a0004u: goto label_2a0004;
        case 0x2a003cu: goto label_2a003c;
        case 0x2a0078u: goto label_2a0078;
        case 0x2a00b0u: goto label_2a00b0;
        default: break;
    }

    ctx->pc = 0x29fe64u;

    // 0x29fe64: 0xc067694  jal         func_19DA50
    ctx->pc = 0x29FE64u;
    SET_GPR_U32(ctx, 31, 0x29FE6Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x29FE64u, 0x29FE6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE6Cu;
label_29fe6c:
    // 0x29fe6c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x29fe6cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29fe70: 0x312a0007  andi        $t2, $t1, 0x7
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x29fe74: 0xa1080  sll         $v0, $t2, 2
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x29fe78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x29fe7c: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x29fe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29fe80: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x29fe84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x29fe88: 0x8fa20168  lw          $v0, 0x168($sp)
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe8c: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x29fe8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29fe90: 0x1480010b  bnez        $a0, . + 4 + (0x10B << 2)
    ctx->pc = 0x29FE90u;
    {
        const bool branch_taken_0x29fe90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe90) {
            ctx->pc = 0x2A02C0u;
            return;
        }
    }
    ctx->pc = 0x29FE98u;
    // 0x29fe98: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29fe9c: 0x24a61330  addiu       $a2, $a1, 0x1330
    ctx->pc = 0x29fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4912));
    // 0x29fea0: 0x8cc70014  lw          $a3, 0x14($a2)
    ctx->pc = 0x29fea0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x29fea4: 0x30e80004  andi        $t0, $a3, 0x4
    ctx->pc = 0x29fea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
    // 0x29fea8: 0x11000083  beqz        $t0, . + 4 + (0x83 << 2)
    ctx->pc = 0x29FEA8u;
    {
        const bool branch_taken_0x29fea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fea8) {
            ctx->pc = 0x2A00B8u;
            return;
        }
    }
    ctx->pc = 0x29FEB0u;
    // 0x29feb0: 0x27a90050  addiu       $t1, $sp, 0x50
    ctx->pc = 0x29feb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29feb4: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x29feb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x29feb8: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FEB8u;
    SET_GPR_U32(ctx, 31, 0x29FEC0u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FEB8u, 0x29FEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEC0u;
label_29fec0:
    // 0x29fec0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x29fec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29fec4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FEC4u;
    SET_GPR_U32(ctx, 31, 0x29FECCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FEC4u, 0x29FECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FECCu;
label_29fecc:
    // 0x29fecc: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x29feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fed0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x29FED0u;
    SET_GPR_U32(ctx, 31, 0x29FED8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x29FED0u, 0x29FED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FED8u;
label_29fed8:
    // 0x29fed8: 0x3c044200  lui         $a0, 0x4200
    ctx->pc = 0x29fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16896 << 16));
    // 0x29fedc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x29fedcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fee0: 0x0  nop
    ctx->pc = 0x29fee0u;
    // NOP
    // 0x29fee4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x29fee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x29fee8: 0x3c0541c0  lui         $a1, 0x41C0
    ctx->pc = 0x29fee8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16832 << 16));
    // 0x29feec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x29feecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29fef0: 0x0  nop
    ctx->pc = 0x29fef0u;
    // NOP
    // 0x29fef4: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x29fef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x29fef8: 0x3c064180  lui         $a2, 0x4180
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16768 << 16));
    // 0x29fefc: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x29fefcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff00: 0x0  nop
    ctx->pc = 0x29ff00u;
    // NOP
    // 0x29ff04: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x29ff04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x29ff08: 0x3c074300  lui         $a3, 0x4300
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17152 << 16));
    // 0x29ff0c: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x29ff0cu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff10: 0x0  nop
    ctx->pc = 0x29ff10u;
    // NOP
    // 0x29ff14: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x29ff14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x29ff18: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x29ff18u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff1c: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x29ff1cu;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff20: 0x0  nop
    ctx->pc = 0x29ff20u;
    // NOP
    // 0x29ff24: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x29ff24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x29ff28: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x29ff28u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff2c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x29ff2cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff30: 0x0  nop
    ctx->pc = 0x29ff30u;
    // NOP
    // 0x29ff34: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x29ff34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x29ff38: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x29ff38u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff3c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x29ff3cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff40: 0x0  nop
    ctx->pc = 0x29ff40u;
    // NOP
    // 0x29ff44: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x29ff44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x29ff48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ff48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ff4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29ff4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29ff50: 0x0  nop
    ctx->pc = 0x29ff50u;
    // NOP
    // 0x29ff54: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x29ff54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    // 0x29ff58: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29ff5c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29ff5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ff60: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29ff64: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29ff64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29ff68: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ff68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ff6c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ff70: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29ff74: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ff74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ff78: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ff78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29ff7c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29ff7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ff80: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29ff80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29ff84: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29ff84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ff88: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FF88u;
    SET_GPR_U32(ctx, 31, 0x29FF90u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FF88u, 0x29FF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF90u;
label_29ff90:
    // 0x29ff90: 0x3c024448  lui         $v0, 0x4448
    ctx->pc = 0x29ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17480 << 16));
    // 0x29ff94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29ff94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ff98: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x29ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x29ff9c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x29ff9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x29ffa0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x29ffa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ffa4: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x29ffa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ffa8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x29ffa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x29ffac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ffacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ffb0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29ffb4: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29ffb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29ffb8: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29ffb8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29ffbc: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29ffbcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29ffc0: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FFC0u;
    SET_GPR_U32(ctx, 31, 0x29FFC8u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FFC0u, 0x29FFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FFC8u;
label_29ffc8:
    // 0x29ffc8: 0x3c053c23  lui         $a1, 0x3C23
    ctx->pc = 0x29ffc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15395 << 16));
    // 0x29ffcc: 0x34a4d70a  ori         $a0, $a1, 0xD70A
    ctx->pc = 0x29ffccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)55050);
    // 0x29ffd0: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x29ffd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x29ffd4: 0x3c064448  lui         $a2, 0x4448
    ctx->pc = 0x29ffd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17480 << 16));
    // 0x29ffd8: 0x44866000  mtc1        $a2, $f12
    ctx->pc = 0x29ffd8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29ffdc: 0x8fa70168  lw          $a3, 0x168($sp)
    ctx->pc = 0x29ffdcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x29ffe0: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x29ffe0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x29ffe4: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x29ffe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x29ffe8: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x29ffe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ffec: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x29ffecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x29fff0: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x29fff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x29fff4: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x29fff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x29fff8: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x29fff8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x29fffc: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x29FFFCu;
    SET_GPR_U32(ctx, 31, 0x2A0004u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x29FFFCu, 0x2A0004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0004u;
label_2a0004:
    // 0x2a0004: 0x3c0543fa  lui         $a1, 0x43FA
    ctx->pc = 0x2a0004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17402 << 16));
    // 0x2a0008: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2a0008u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a000c: 0x3c073c23  lui         $a3, 0x3C23
    ctx->pc = 0x2a000cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0010: 0x34e6d70a  ori         $a2, $a3, 0xD70A
    ctx->pc = 0x2a0010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)55050);
    // 0x2a0014: 0x44866800  mtc1        $a2, $f13
    ctx->pc = 0x2a0014u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0018: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a0018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a001c: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x2a001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2a0020: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a0020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0024: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0024u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0028: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a0028u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a002c: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a002cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a0030: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a0030u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0034: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0034u;
    SET_GPR_U32(ctx, 31, 0x2A003Cu);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0034u, 0x2A003Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A003Cu;
label_2a003c:
    // 0x2a003c: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x2a003cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x2a0040: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2a0040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0044: 0x3c043c23  lui         $a0, 0x3C23
    ctx->pc = 0x2a0044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0048: 0x3482d70a  ori         $v0, $a0, 0xD70A
    ctx->pc = 0x2a0048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)55050);
    // 0x2a004c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a004cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a0050: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x2a0050u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0054: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2a0054u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2a0058: 0x2405001b  addiu       $a1, $zero, 0x1B
    ctx->pc = 0x2a0058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2a005c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a005cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0060: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a0064: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a0064u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a0068: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a0068u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a006c: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a006cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a0070: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A0070u;
    SET_GPR_U32(ctx, 31, 0x2A0078u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A0070u, 0x2A0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A0078u;
label_2a0078:
    // 0x2a0078: 0x3c044448  lui         $a0, 0x4448
    ctx->pc = 0x2a0078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17480 << 16));
    // 0x2a007c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x2a007cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a0080: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x2a0080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
    // 0x2a0084: 0x3462d70a  ori         $v0, $v1, 0xD70A
    ctx->pc = 0x2a0084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x2a0088: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2a0088u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2a008c: 0x8fa40168  lw          $a0, 0x168($sp)
    ctx->pc = 0x2a008cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0090: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x2a0090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2a0094: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2a0094u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2a0098: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a0098u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a009c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x2a009cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2a00a0: 0x27a90070  addiu       $t1, $sp, 0x70
    ctx->pc = 0x2a00a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2a00a4: 0x27aa0080  addiu       $t2, $sp, 0x80
    ctx->pc = 0x2a00a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2a00a8: 0xc086970  jal         func_21A5C0
    ctx->pc = 0x2A00A8u;
    SET_GPR_U32(ctx, 31, 0x2A00B0u);
    ctx->pc = 0x21A5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21A5C0u, 0x2A00A8u, 0x2A00B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A00B0u;
label_2a00b0:
    // 0x2a00b0: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x2A00B0u;
    {
        const bool branch_taken_0x2a00b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a00b0) {
            ctx->pc = 0x2A0340u;
            return;
        }
    }
    ctx->pc = 0x2A00B8u;
}
