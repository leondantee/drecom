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

// Function: set_eff_pl00_2d_denki
// Address: 0x2f4db0 - 0x2f521c
void set_eff_pl00_2d_denki_0x2f4db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_pl00_2d_denki_0x2f4db0");
#endif

    switch (ctx->pc) {
        case 0x2f4e0cu: goto label_2f4e0c;
        case 0x2f4f48u: goto label_2f4f48;
        case 0x2f4fe4u: goto label_2f4fe4;
        case 0x2f5124u: goto label_2f5124;
        default: break;
    }

    ctx->pc = 0x2f4db0u;

    // 0x2f4db0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2f4db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2f4db4: 0x7fbf0070  sq          $ra, 0x70($sp)
    ctx->pc = 0x2f4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 31));
    // 0x2f4db8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2f4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2f4dbc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2f4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2f4dc0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2f4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2f4dc4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2f4dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2f4dc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2f4dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2f4dcc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f4dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2f4dd0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f4dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2f4dd4: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x2f4dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x2f4dd8: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2f4dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x2f4ddc: 0xafa60098  sw          $a2, 0x98($sp)
    ctx->pc = 0x2f4ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 6));
    // 0x2f4de0: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x2f4de0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2f4de4: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x2f4de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
    // 0x2f4de8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x2f4de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f4dec: 0x1440006d  bnez        $v0, . + 4 + (0x6D << 2)
    ctx->pc = 0x2F4DECu;
    {
        const bool branch_taken_0x2f4dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4dec) {
            ctx->pc = 0x2F4FA4u;
            goto label_2f4fa4;
        }
    }
    ctx->pc = 0x2F4DF4u;
    // 0x2f4df4: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x2f4df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x2f4df8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4df8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4dfc: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2f4dfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f4e00: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2f4e00u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4e04: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F4E04u;
    SET_GPR_U32(ctx, 31, 0x2F4E0Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F4E04u, 0x2F4E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4E0Cu;
label_2f4e0c:
    // 0x2f4e0c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4e10: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f4e14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4e18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4e18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4e1c: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f4e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4e20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4e24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4e24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4e28: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2f4e28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4e2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4e30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4e34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4e38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4e3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4e40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4e44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4e48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4e48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4e4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4e50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4e54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4e58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4e5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4e60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4e64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4e68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4e6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4e6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4e74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f4e78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4e7c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f4e7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4e80: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4e84: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4e84u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4e88: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4e8c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4e90: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4e94: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4e98: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f4e98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f4e9c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ea0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f4ea4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f4ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f4ea8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f4ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f4eac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4eb0: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f4eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f4eb4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f4eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f4eb8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f4ebc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f4ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f4ec0: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f4ec0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f4ec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f4ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f4ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f4ecc: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f4ed0: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2f4ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f4ed4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f4ed4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f4ed8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4edc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4edcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4ee0: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2f4ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f4ee4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4ee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ee8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4eec: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2f4eecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4ef0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ef4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4ef8: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f4ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4efc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f00: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4f00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f04: 0xa040013b  sb          $zero, 0x13B($v0)
    ctx->pc = 0x2f4f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4f08: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f0c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f10: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f4f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4f14: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f18: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f1c: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f4f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4f20: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f24: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f28: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f4f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4f2c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f30: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f34: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f4f34u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4f38: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f3c: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f4f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4f40: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F4F40u;
    SET_GPR_U32(ctx, 31, 0x2F4F48u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F4F40u, 0x2F4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4F48u;
label_2f4f48:
    // 0x2f4f48: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f4c: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f4f4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f4f50: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f54: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f4f54u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f4f58: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f4f5c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f4f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f4f60: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F4F60u;
    {
        const bool branch_taken_0x2f4f60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f4f60) {
            ctx->pc = 0x2F4F74u;
            goto label_2f4f74;
        }
    }
    ctx->pc = 0x2F4F68u;
    // 0x2f4f68: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x2f4f68u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4f6c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F4F6Cu;
    {
        const bool branch_taken_0x2f4f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f6c) {
            ctx->pc = 0x2F4F90u;
            goto label_2f4f90;
        }
    }
    ctx->pc = 0x2F4F74u;
label_2f4f74:
    // 0x2f4f74: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f78: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f4f78u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f4f7c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4f7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f80: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f4f80u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f4f84: 0x24730118  addiu       $s3, $v1, 0x118
    ctx->pc = 0x2f4f84u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f4f88: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x2f4f88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f4f8c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x2f4f8cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f4f90:
    // 0x2f4f90: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f4f90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f4f94: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x2f4f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f4f98: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x2f4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f4f9c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x2F4F9Cu;
    {
        const bool branch_taken_0x2f4f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4f9c) {
            ctx->pc = 0x2F5188u;
            goto label_2f5188;
        }
    }
    ctx->pc = 0x2F4FA4u;
label_2f4fa4:
    // 0x2f4fa4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2f4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f4fa8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2f4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2f4fac: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x2f4facu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2f4fb0: 0x8c820130  lw          $v0, 0x130($a0)
    ctx->pc = 0x2f4fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x2f4fb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f4fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f4fb8: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x2f4fb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2f4fbc: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f4fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2f4fc0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2f4fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2f4fc4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2f4fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2f4fc8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f4fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f4fcc: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x2f4fccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2f4fd0: 0x24040909  addiu       $a0, $zero, 0x909
    ctx->pc = 0x2f4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2313));
    // 0x2f4fd4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2f4fd4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f4fd8: 0x8fa60098  lw          $a2, 0x98($sp)
    ctx->pc = 0x2f4fd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2f4fdc: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2F4FDCu;
    SET_GPR_U32(ctx, 31, 0x2F4FE4u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2F4FDCu, 0x2F4FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4FE4u;
label_2f4fe4:
    // 0x2f4fe4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4fe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4fe8: 0xac22a618  sw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4fe8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A618u, _value); } while (0);
    // 0x2f4fec: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ff0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f4ff4: 0xa040013a  sb          $zero, 0x13A($v0)
    ctx->pc = 0x2f4ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 314), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f4ff8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f4ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f4ffc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f4ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5000: 0xa040011d  sb          $zero, 0x11D($v0)
    ctx->pc = 0x2f5000u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 285), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5004: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5008: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5008u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f500c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f500cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5010: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5014: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5018: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f501c: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f501cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5020: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5020u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5024: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5024u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5028: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5028u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f502c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f502cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5030: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5034: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f5038: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f5038u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f503c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f503cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5040: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5044: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f5048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f504c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f5050: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f5050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5054: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x2f5054u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5058: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f505c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f505cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f5060: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f5060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5064: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5064u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5068: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f506c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f506cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f5070: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x2f5070u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x2f5074: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5074u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5078: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x2f5078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x2f507c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x2f507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2f5080: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2f5080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2f5084: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f5084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f5088: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2f5088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x2f508c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2f508cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x2f5090: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2f5090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2f5094: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2f5094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2f5098: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x2f5098u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2f509c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f509cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f50a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f50a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f50a4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2f50a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2f50a8: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x2f50a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2f50ac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2f50acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2f50b0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50b4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50b4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50b8: 0xa043011a  sb          $v1, 0x11A($v0)
    ctx->pc = 0x2f50b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 282), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50bc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50c0: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50c4: 0xa040011b  sb          $zero, 0x11B($v0)
    ctx->pc = 0x2f50c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 283), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50c8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50cc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50d0: 0xa040011c  sb          $zero, 0x11C($v0)
    ctx->pc = 0x2f50d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 284), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f50d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f50d8: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50dc: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50dcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50e0: 0xa043013b  sb          $v1, 0x13B($v0)
    ctx->pc = 0x2f50e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 315), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f50e4: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50e8: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50ec: 0xa040013c  sb          $zero, 0x13C($v0)
    ctx->pc = 0x2f50ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 316), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50f0: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f50f4: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f50f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f50f8: 0xa040013d  sb          $zero, 0x13D($v0)
    ctx->pc = 0x2f50f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 317), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f50fc: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f50fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5100: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f5100u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5104: 0xa040013e  sb          $zero, 0x13E($v0)
    ctx->pc = 0x2f5104u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 318), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5108: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f510c: 0x8c22a618  lw          $v0, -0x59E8($at)
    ctx->pc = 0x2f510cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f5110: 0xa040013f  sb          $zero, 0x13F($v0)
    ctx->pc = 0x2f5110u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 319), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f5114: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5114u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5118: 0x8c24a618  lw          $a0, -0x59E8($at)
    ctx->pc = 0x2f5118u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A618u));
    // 0x2f511c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2F511Cu;
    SET_GPR_U32(ctx, 31, 0x2F5124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2F511Cu, 0x2F5124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F5124u;
label_2f5124:
    // 0x2f5124: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5128: 0xac22a610  sw          $v0, -0x59F0($at)
    ctx->pc = 0x2f5128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x53A610u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x53A610u, _value); } while (0);
    // 0x2f512c: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f512cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5130: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f5130u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f5134: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f5138: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f5138u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f513c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F513Cu;
    {
        const bool branch_taken_0x2f513c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f513c) {
            ctx->pc = 0x2F5150u;
            goto label_2f5150;
        }
    }
    ctx->pc = 0x2F5144u;
    // 0x2f5144: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x2f5144u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2f5148: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2F5148u;
    {
        const bool branch_taken_0x2f5148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f5148) {
            ctx->pc = 0x2F5178u;
            goto label_2f5178;
        }
    }
    ctx->pc = 0x2F5150u;
label_2f5150:
    // 0x2f5150: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5154: 0x8c24a610  lw          $a0, -0x59F0($at)
    ctx->pc = 0x2f5154u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f5158: 0x94830118  lhu         $v1, 0x118($a0)
    ctx->pc = 0x2f5158u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 280)));
    // 0x2f515c: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2f515cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x2f5160: 0xa4830118  sh          $v1, 0x118($a0)
    ctx->pc = 0x2f5160u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 280), (uint16_t)GPR_U32(ctx, 3));
    // 0x2f5164: 0x3c010054  lui         $at, 0x54
    ctx->pc = 0x2f5164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)84 << 16));
    // 0x2f5168: 0x8c23a610  lw          $v1, -0x59F0($at)
    ctx->pc = 0x2f5168u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f516c: 0x24750118  addiu       $s5, $v1, 0x118
    ctx->pc = 0x2f516cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 280));
    // 0x2f5170: 0x96a30000  lhu         $v1, 0x0($s5)
    ctx->pc = 0x2f5170u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2f5174: 0x3072ffff  andi        $s2, $v1, 0xFFFF
    ctx->pc = 0x2f5174u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2f5178:
    // 0x2f5178: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2f5178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2f517c: 0x2476a610  addiu       $s6, $v1, -0x59F0
    ctx->pc = 0x2f517cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2f5180: 0x8ed00000  lw          $s0, 0x0($s6)
    ctx->pc = 0x2f5180u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2f5184: 0x0  nop
    ctx->pc = 0x2f5184u;
    // NOP
label_2f5188:
    // 0x2f5188: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x2f5188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x2f518c: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x2f518cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x2f5190: 0x12030017  beq         $s0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x2F5190u;
    {
        const bool branch_taken_0x2f5190 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x2f5190) {
            ctx->pc = 0x2F51F0u;
            goto label_2f51f0;
        }
    }
    ctx->pc = 0x2F5198u;
    // 0x2f5198: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2f5198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x2f519c: 0xa203011c  sb          $v1, 0x11C($s0)
    ctx->pc = 0x2f519cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 284), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f51a0: 0x3c0342b0  lui         $v1, 0x42B0
    ctx->pc = 0x2f51a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17072 << 16));
    // 0x2f51a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51a8: 0x0  nop
    ctx->pc = 0x2f51a8u;
    // NOP
    // 0x2f51ac: 0xe6000090  swc1        $f0, 0x90($s0)
    ctx->pc = 0x2f51acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 144), bits); }
    // 0x2f51b0: 0x3c0342c4  lui         $v1, 0x42C4
    ctx->pc = 0x2f51b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17092 << 16));
    // 0x2f51b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51b8: 0x0  nop
    ctx->pc = 0x2f51b8u;
    // NOP
    // 0x2f51bc: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x2f51bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
    // 0x2f51c0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f51c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f51c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51c8: 0x0  nop
    ctx->pc = 0x2f51c8u;
    // NOP
    // 0x2f51cc: 0xe6000098  swc1        $f0, 0x98($s0)
    ctx->pc = 0x2f51ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x2f51d0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x2f51d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x2f51d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2f51d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f51d8: 0x0  nop
    ctx->pc = 0x2f51d8u;
    // NOP
    // 0x2f51dc: 0xe600009c  swc1        $f0, 0x9C($s0)
    ctx->pc = 0x2f51dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 156), bits); }
    // 0x2f51e0: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2f51e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f51e4: 0xe6000104  swc1        $f0, 0x104($s0)
    ctx->pc = 0x2f51e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
    // 0x2f51e8: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x2f51e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2f51ec: 0xae030100  sw          $v1, 0x100($s0)
    ctx->pc = 0x2f51ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 3));
label_2f51f0:
    // 0x2f51f0: 0x7bbf0070  lq          $ra, 0x70($sp)
    ctx->pc = 0x2f51f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f51f4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2f51f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f51f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2f51f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f51fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2f51fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f5200: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2f5200u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f5204: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2f5204u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f5208: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f5208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f520c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f520cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f5210: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2f5210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2f5214: 0x3e00008  jr          $ra
    ctx->pc = 0x2F5214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F5214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F521Cu;
}
