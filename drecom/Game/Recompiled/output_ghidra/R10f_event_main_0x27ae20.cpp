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

// Function: R10f_event_main
// Address: 0x27ae20 - 0x27b0c4
void R10f_event_main_0x27ae20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_event_main_0x27ae20");
#endif

    switch (ctx->pc) {
        case 0x27ae58u: goto label_27ae58;
        case 0x27aeb0u: goto label_27aeb0;
        case 0x27aebcu: goto label_27aebc;
        case 0x27aed0u: goto label_27aed0;
        case 0x27aedcu: goto label_27aedc;
        case 0x27aee8u: goto label_27aee8;
        case 0x27aef4u: goto label_27aef4;
        case 0x27af00u: goto label_27af00;
        case 0x27af20u: goto label_27af20;
        case 0x27afbcu: goto label_27afbc;
        case 0x27afc8u: goto label_27afc8;
        case 0x27afdcu: goto label_27afdc;
        case 0x27afe8u: goto label_27afe8;
        case 0x27affcu: goto label_27affc;
        case 0x27b048u: goto label_27b048;
        case 0x27b05cu: goto label_27b05c;
        case 0x27b09cu: goto label_27b09c;
        default: break;
    }

    ctx->pc = 0x27ae20u;

    // 0x27ae20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x27ae20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x27ae24: 0x7fbf0060  sq          $ra, 0x60($sp)
    ctx->pc = 0x27ae24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 31));
    // 0x27ae28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27ae28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x27ae2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27ae2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x27ae30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27ae30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x27ae34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27ae34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x27ae38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27ae38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x27ae3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27ae3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27ae40: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27ae44: 0x24551ac0  addiu       $s5, $v0, 0x1AC0
    ctx->pc = 0x27ae44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 6848));
    // 0x27ae48: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x27ae4c: 0x2451bb48  addiu       $s1, $v0, -0x44B8
    ctx->pc = 0x27ae4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949704));
    // 0x27ae50: 0xc09eac0  jal         func_27AB00
    ctx->pc = 0x27AE50u;
    SET_GPR_U32(ctx, 31, 0x27AE58u);
    ctx->pc = 0x27AB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB00u, 0x27AE50u, 0x27AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AE58u;
label_27ae58:
    // 0x27ae58: 0x3c0245be  lui         $v0, 0x45BE
    ctx->pc = 0x27ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17854 << 16));
    // 0x27ae5c: 0x3442a000  ori         $v0, $v0, 0xA000
    ctx->pc = 0x27ae5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)40960);
    // 0x27ae60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ae60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae64: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ae64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ae68: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x27ae68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x27ae6c: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x27ae70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ae70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae74: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ae74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ae78: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27ae78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x27ae7c: 0x3c02c5a7  lui         $v0, 0xC5A7
    ctx->pc = 0x27ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50599 << 16));
    // 0x27ae80: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x27ae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
    // 0x27ae84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ae84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae88: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ae88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27ae8c: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x27ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x27ae90: 0x3c024023  lui         $v0, 0x4023
    ctx->pc = 0x27ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16419 << 16));
    // 0x27ae94: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x27ae94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x27ae98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27ae98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27ae9c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27ae9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27aea0: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x27aea0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x27aea4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aea8: 0xc0a1120  jal         func_284480
    ctx->pc = 0x27AEA8u;
    SET_GPR_U32(ctx, 31, 0x27AEB0u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x27AEA8u, 0x27AEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEB0u;
label_27aeb0:
    // 0x27aeb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aeb4: 0xc084964  jal         func_212590
    ctx->pc = 0x27AEB4u;
    SET_GPR_U32(ctx, 31, 0x27AEBCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AEB4u, 0x27AEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEBCu;
label_27aebc:
    // 0x27aebc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aec0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27aec0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27aec4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27aec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aec8: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x27AEC8u;
    SET_GPR_U32(ctx, 31, 0x27AED0u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x27AEC8u, 0x27AED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AED0u;
label_27aed0:
    // 0x27aed0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aed4: 0xc084964  jal         func_212590
    ctx->pc = 0x27AED4u;
    SET_GPR_U32(ctx, 31, 0x27AEDCu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AED4u, 0x27AEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEDCu;
label_27aedc:
    // 0x27aedc: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x27aedcu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27aee0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27AEE0u;
    {
        const bool branch_taken_0x27aee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aee0) {
            ctx->pc = 0x27AF08u;
            goto label_27af08;
        }
    }
    ctx->pc = 0x27AEE8u;
label_27aee8:
    // 0x27aee8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aeec: 0xc0a1120  jal         func_284480
    ctx->pc = 0x27AEECu;
    SET_GPR_U32(ctx, 31, 0x27AEF4u);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x27AEECu, 0x27AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AEF4u;
label_27aef4:
    // 0x27aef4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27aef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27aef8: 0xc084964  jal         func_212590
    ctx->pc = 0x27AEF8u;
    SET_GPR_U32(ctx, 31, 0x27AF00u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AEF8u, 0x27AF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF00u;
label_27af00:
    // 0x27af00: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x27af00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x27af04: 0x0  nop
    ctx->pc = 0x27af04u;
    // NOP
label_27af08:
    // 0x27af08: 0x2e420032  sltiu       $v0, $s2, 0x32
    ctx->pc = 0x27af08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x27af0c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x27AF0Cu;
    {
        const bool branch_taken_0x27af0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27af0c) {
            ctx->pc = 0x27AEE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27aee8;
        }
    }
    ctx->pc = 0x27AF14u;
    // 0x27af14: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x27af14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x27af18: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27AF18u;
    SET_GPR_U32(ctx, 31, 0x27AF20u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27AF18u, 0x27AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AF20u;
label_27af20:
    // 0x27af20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27af24: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af28: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x27af2cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC0u, _value); } while (0);
    // 0x27af30: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af34: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af38: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x27af38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC1u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC1u, _value); } while (0);
    // 0x27af3c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af40: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af44: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x27af44u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC2u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC2u, _value); } while (0);
    // 0x27af48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af4c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af50: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x27af50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3EDBC3u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3EDBC3u, _value); } while (0);
    // 0x27af54: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x27af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27af58: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x27af58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x27af5c: 0x2442dbc0  addiu       $v0, $v0, -0x2440
    ctx->pc = 0x27af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x27af60: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x27af60u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3EDBC4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDBC4u, _value); } while (0);
    // 0x27af64: 0x3c0245bd  lui         $v0, 0x45BD
    ctx->pc = 0x27af64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17853 << 16));
    // 0x27af68: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27af68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27af6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af70: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af74: 0xe420dce0  swc1        $f0, -0x2320($at)
    ctx->pc = 0x27af74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE0u, _value); } while (0); }
    // 0x27af78: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27af78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
    // 0x27af7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af80: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af84: 0xe420dce4  swc1        $f0, -0x231C($at)
    ctx->pc = 0x27af84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE4u, _value); } while (0); }
    // 0x27af88: 0x3c02c5a2  lui         $v0, 0xC5A2
    ctx->pc = 0x27af88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50594 << 16));
    // 0x27af8c: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x27af8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x27af90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27af90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27af94: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27af94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27af98: 0xe420dce8  swc1        $f0, -0x2318($at)
    ctx->pc = 0x27af98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDCE8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDCE8u, _value); } while (0); }
    // 0x27af9c: 0x3c023fae  lui         $v0, 0x3FAE
    ctx->pc = 0x27af9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16302 << 16));
    // 0x27afa0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x27afa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
    // 0x27afa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27afa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27afa8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x27afa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x27afac: 0xe420dc94  swc1        $f0, -0x236C($at)
    ctx->pc = 0x27afacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EDC94u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EDC94u, _value); } while (0); }
    // 0x27afb0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27afb0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27afb4: 0xc0a1120  jal         func_284480
    ctx->pc = 0x27AFB4u;
    SET_GPR_U32(ctx, 31, 0x27AFBCu);
    ctx->pc = 0x284480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284480u, 0x27AFB4u, 0x27AFBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFBCu;
label_27afbc:
    // 0x27afbc: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x27afbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x27afc0: 0xc084964  jal         func_212590
    ctx->pc = 0x27AFC0u;
    SET_GPR_U32(ctx, 31, 0x27AFC8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AFC0u, 0x27AFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFC8u;
label_27afc8:
    // 0x27afc8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27afc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27afcc: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27afccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27afd0: 0x2445abc0  addiu       $a1, $v0, -0x5440
    ctx->pc = 0x27afd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945728));
    // 0x27afd4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27AFD4u;
    SET_GPR_U32(ctx, 31, 0x27AFDCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27AFD4u, 0x27AFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFDCu;
label_27afdc:
    // 0x27afdc: 0x240400be  addiu       $a0, $zero, 0xBE
    ctx->pc = 0x27afdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 190));
    // 0x27afe0: 0xc084964  jal         func_212590
    ctx->pc = 0x27AFE0u;
    SET_GPR_U32(ctx, 31, 0x27AFE8u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27AFE0u, 0x27AFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFE8u;
label_27afe8:
    // 0x27afe8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27afe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x27afec: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27afecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    // 0x27aff0: 0x2445acf0  addiu       $a1, $v0, -0x5310
    ctx->pc = 0x27aff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946032));
    // 0x27aff4: 0xc0848cc  jal         func_212330
    ctx->pc = 0x27AFF4u;
    SET_GPR_U32(ctx, 31, 0x27AFFCu);
    ctx->pc = 0x212330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212330u, 0x27AFF4u, 0x27AFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AFFCu;
label_27affc:
    // 0x27affc: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27affcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b000: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b004: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b008: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B008u;
    {
        const bool branch_taken_0x27b008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b008) {
            ctx->pc = 0x27B01Cu;
            goto label_27b01c;
        }
    }
    ctx->pc = 0x27B010u;
    // 0x27b010: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x27b010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27b014: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b018: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x27b018u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_27b01c:
    // 0x27b01c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x27b01cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b020: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b024: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b028: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B028u;
    {
        const bool branch_taken_0x27b028 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b028) {
            ctx->pc = 0x27B03Cu;
            goto label_27b03c;
        }
    }
    ctx->pc = 0x27B030u;
    // 0x27b030: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x27b030u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27b034: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b038: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x27b038u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_27b03c:
    // 0x27b03c: 0x240401fe  addiu       $a0, $zero, 0x1FE
    ctx->pc = 0x27b03cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 510));
    // 0x27b040: 0xc084964  jal         func_212590
    ctx->pc = 0x27B040u;
    SET_GPR_U32(ctx, 31, 0x27B048u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B040u, 0x27B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B048u;
label_27b048:
    // 0x27b048: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x27b048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x27b04c: 0x245395a0  addiu       $s3, $v0, -0x6A60
    ctx->pc = 0x27b04cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940064));
    // 0x27b050: 0xa2600000  sb          $zero, 0x0($s3)
    ctx->pc = 0x27b050u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6195A0u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6195A0u, _value); } while (0);
    // 0x27b054: 0xc09eacc  jal         func_27AB30
    ctx->pc = 0x27B054u;
    SET_GPR_U32(ctx, 31, 0x27B05Cu);
    ctx->pc = 0x27AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27AB30u, 0x27B054u, 0x27B05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B05Cu;
label_27b05c:
    // 0x27b05c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x27b05cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27b060: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b064: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b068: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x27B068u;
    {
        const bool branch_taken_0x27b068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b068) {
            ctx->pc = 0x27B074u;
            goto label_27b074;
        }
    }
    ctx->pc = 0x27B070u;
    // 0x27b070: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x27b070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_27b074:
    // 0x27b074: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x27b074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x27b078: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x27b078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x27b07c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x27b07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27b080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B080u;
    {
        const bool branch_taken_0x27b080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b080) {
            ctx->pc = 0x27B094u;
            goto label_27b094;
        }
    }
    ctx->pc = 0x27B088u;
    // 0x27b088: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x27b088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x27b08c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27b090: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x27b090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_27b094:
    // 0x27b094: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B094u;
    SET_GPR_U32(ctx, 31, 0x27B09Cu);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B094u, 0x27B09Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B09Cu;
label_27b09c:
    // 0x27b09c: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x27b09cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27b0a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x27b0a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27b0a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27b0a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27b0a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27b0a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27b0ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27b0acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b0b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27b0b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b0b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27b0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b0b8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27b0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x27b0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x27B0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B0C4u;
}
