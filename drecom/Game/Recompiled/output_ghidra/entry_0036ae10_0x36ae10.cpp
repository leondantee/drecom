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

// Function: entry_0036ae10
// Address: 0x36ae10 - 0x36affc
void entry_0036ae10_0x36ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036ae10_0x36ae10");
#endif

    switch (ctx->pc) {
        case 0x36aec4u: goto label_36aec4;
        case 0x36aed4u: goto label_36aed4;
        case 0x36af34u: goto label_36af34;
        default: break;
    }

    ctx->pc = 0x36ae10u;

    // 0x36ae10: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x36ae10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x36ae14: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x36AE14u;
    {
        const bool branch_taken_0x36ae14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36ae14) {
            ctx->pc = 0x36ADC4u;
            return;
        }
    }
    ctx->pc = 0x36AE1Cu;
    // 0x36ae1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae20: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae24: 0x24421334  addiu       $v0, $v0, 0x1334
    ctx->pc = 0x36ae24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4916));
    // 0x36ae28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x36ae2c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x36ae2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
    // 0x36ae30: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x36ae30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x36ae34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ae34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ae38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae3c: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36ae3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36ae40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36ae40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36ae44: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae48: 0x24421338  addiu       $v0, $v0, 0x1338
    ctx->pc = 0x36ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36ae4c: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x36ae4cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x36ae50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36ae54: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae58: 0x2442133c  addiu       $v0, $v0, 0x133C
    ctx->pc = 0x36ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36ae5c: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x36ae5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x36ae60: 0x3c0246bb  lui         $v0, 0x46BB
    ctx->pc = 0x36ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18107 << 16));
    // 0x36ae64: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x36ae64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x36ae68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36ae68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36ae6c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae70: 0xe44011e8  swc1        $f0, 0x11E8($v0)
    ctx->pc = 0x36ae70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4584), bits); }
    // 0x36ae74: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36ae74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae78: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x36ae78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x36ae7c: 0x2402fff7  addiu       $v0, $zero, -0x9
    ctx->pc = 0x36ae7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x36ae80: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x36ae80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x36ae84: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x36ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x36ae88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36ae88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36ae8c: 0x2443b1c0  addiu       $v1, $v0, -0x4E40
    ctx->pc = 0x36ae8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947264));
    // 0x36ae90: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36ae94: 0xac431228  sw          $v1, 0x1228($v0)
    ctx->pc = 0x36ae94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4648), GPR_U32(ctx, 3));
    // 0x36ae98: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x36ae98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x36ae9c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36ae9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aea0: 0xac43121c  sw          $v1, 0x121C($v0)
    ctx->pc = 0x36aea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4636), GPR_U32(ctx, 3));
    // 0x36aea4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x36aea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aea8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36aea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aeac: 0xa0431219  sb          $v1, 0x1219($v0)
    ctx->pc = 0x36aeacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4633), (uint8_t)GPR_U32(ctx, 3));
    // 0x36aeb0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36aeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aeb4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36aeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x36aeb8: 0x2445b1b0  addiu       $a1, $v0, -0x4E50
    ctx->pc = 0x36aeb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947248));
    // 0x36aebc: 0xc099c30  jal         func_2670C0
    ctx->pc = 0x36AEBCu;
    SET_GPR_U32(ctx, 31, 0x36AEC4u);
    ctx->pc = 0x2670C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2670C0u, 0x36AEBCu, 0x36AEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AEC4u;
label_36aec4:
    // 0x36aec4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x36aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36aec8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36aec8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36aecc: 0xc099794  jal         func_265E50
    ctx->pc = 0x36AECCu;
    SET_GPR_U32(ctx, 31, 0x36AED4u);
    ctx->pc = 0x265E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x265E50u, 0x36AECCu, 0x36AED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AED4u;
label_36aed4:
    // 0x36aed4: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36aed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aed8: 0xac621348  sw          $v0, 0x1348($v1)
    ctx->pc = 0x36aed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4936), GPR_U32(ctx, 2));
    // 0x36aedc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36aee0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36aee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36aee4: 0x8c421348  lw          $v0, 0x1348($v0)
    ctx->pc = 0x36aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4936)));
    // 0x36aee8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36aee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x36aeec: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x36aeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x36aef0: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x36aef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x36aef4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36aef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x36aef8: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x36aef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x36aefc: 0xa444000e  sh          $a0, 0xE($v0)
    ctx->pc = 0x36aefcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x36af00: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af04: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36af04u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x36af08: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x36af08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36af0c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af10: 0xac431340  sw          $v1, 0x1340($v0)
    ctx->pc = 0x36af10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4928), GPR_U32(ctx, 3));
    // 0x36af14: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af18: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36af18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af1c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x36af1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x36af20: 0x24065a03  addiu       $a2, $zero, 0x5A03
    ctx->pc = 0x36af20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23043));
    // 0x36af24: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36af24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36af28: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x36af28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36af2c: 0xc0967bc  jal         func_259EF0
    ctx->pc = 0x36AF2Cu;
    SET_GPR_U32(ctx, 31, 0x36AF34u);
    ctx->pc = 0x259EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259EF0u, 0x36AF2Cu, 0x36AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36AF34u;
label_36af34:
    // 0x36af34: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x36af34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36af38: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x36af38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x36af3c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x36af3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36af40: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x36af40u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x36af44: 0x10200058  beqz        $at, . + 4 + (0x58 << 2)
    ctx->pc = 0x36AF44u;
    {
        const bool branch_taken_0x36af44 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36af44) {
            ctx->pc = 0x36B0A8u;
            return;
        }
    }
    ctx->pc = 0x36AF4Cu;
    // 0x36af4c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36af4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x36af50: 0xa0204f11  sb          $zero, 0x4F11($at)
    ctx->pc = 0x36af50u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3F4F11u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F4F11u, _value); } while (0);
    // 0x36af54: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x36af54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36af58: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af5c: 0x8c22f9e0  lw          $v0, -0x620($at)
    ctx->pc = 0x36af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x36af60: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36af60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36af64: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x36af64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36af68: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af6c: 0x8c22f9e4  lw          $v0, -0x61C($at)
    ctx->pc = 0x36af6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x36af70: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36af70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36af74: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af78: 0x8c23f9e0  lw          $v1, -0x620($at)
    ctx->pc = 0x36af78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E0u));
    // 0x36af7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36af80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36af80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36af84: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36af84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36af88: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36af88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36af8c: 0x8c23f9e4  lw          $v1, -0x61C($at)
    ctx->pc = 0x36af8cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E4u));
    // 0x36af90: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36af90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36af94: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36af94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36af98: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36af98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36af9c: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x36af9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36afa0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afa4: 0x8c22f9e8  lw          $v0, -0x618($at)
    ctx->pc = 0x36afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x36afa8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36afac: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x36afacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x36afb0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afb4: 0x8c22f9ec  lw          $v0, -0x614($at)
    ctx->pc = 0x36afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x36afb8: 0xac43128c  sw          $v1, 0x128C($v0)
    ctx->pc = 0x36afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4748), GPR_U32(ctx, 3));
    // 0x36afbc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afc0: 0x8c23f9e8  lw          $v1, -0x618($at)
    ctx->pc = 0x36afc0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9E8u));
    // 0x36afc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36afc8: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36afc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36afcc: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36afccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36afd0: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afd4: 0x8c23f9ec  lw          $v1, -0x614($at)
    ctx->pc = 0x36afd4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61F9ECu));
    // 0x36afd8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x36afd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x36afdc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x36afdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x36afe0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x36afe0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x36afe4: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x36afe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x36afe8: 0x9022e652  lbu         $v0, -0x19AE($at)
    ctx->pc = 0x36afe8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x61E652u));
    // 0x36afec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36afecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x36aff0: 0x2450000b  addiu       $s0, $v0, 0xB
    ctx->pc = 0x36aff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 11));
    // 0x36aff4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x36AFF4u;
    {
        const bool branch_taken_0x36aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36aff4) {
            ctx->pc = 0x36B028u;
            return;
        }
    }
    ctx->pc = 0x36AFFCu;
}
