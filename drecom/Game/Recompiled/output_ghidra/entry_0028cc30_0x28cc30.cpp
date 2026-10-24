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

// Function: entry_0028cc30
// Address: 0x28cc30 - 0x28ccc8
void entry_0028cc30_0x28cc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028cc30_0x28cc30");
#endif

    switch (ctx->pc) {
        case 0x28cc8cu: goto label_28cc8c;
        default: break;
    }

    ctx->pc = 0x28cc30u;

    // 0x28cc30: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cc34: 0x30640002  andi        $a0, $v1, 0x2
    ctx->pc = 0x28cc34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x28cc38: 0x1480008d  bnez        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x28CC38u;
    {
        const bool branch_taken_0x28cc38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cc38) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CC40u;
    // 0x28cc40: 0x82025dea  lb          $v0, 0x5DEA($s0)
    ctx->pc = 0x28cc40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24042)));
    // 0x28cc44: 0xa2025de8  sb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28cc44u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 24040), (uint8_t)GPR_U32(ctx, 2));
    // 0x28cc48: 0x26150520  addiu       $s5, $s0, 0x520
    ctx->pc = 0x28cc48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1312));
    // 0x28cc4c: 0x82025de8  lb          $v0, 0x5DE8($s0)
    ctx->pc = 0x28cc4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 24040)));
    // 0x28cc50: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x28cc50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x28cc54: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x28cc54u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x28cc58: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x28cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28cc5c: 0xafa20178  sw          $v0, 0x178($sp)
    ctx->pc = 0x28cc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 2));
    // 0x28cc60: 0x8fa30178  lw          $v1, 0x178($sp)
    ctx->pc = 0x28cc60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
    // 0x28cc64: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x28cc64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x28cc68: 0x3483008c  ori         $v1, $a0, 0x8C
    ctx->pc = 0x28cc68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)140);
    // 0x28cc6c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x28cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
    // 0x28cc70: 0x8ea60000  lw          $a2, 0x0($s5)
    ctx->pc = 0x28cc70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28cc74: 0x8fa4017c  lw          $a0, 0x17C($sp)
    ctx->pc = 0x28cc74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
    // 0x28cc78: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x28cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x28cc7c: 0x3445b000  ori         $a1, $v0, 0xB000
    ctx->pc = 0x28cc7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x28cc80: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x28cc80u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x28cc84: 0xc07648c  jal         func_1D9230
    ctx->pc = 0x28CC84u;
    SET_GPR_U32(ctx, 31, 0x28CC8Cu);
    ctx->pc = 0x1D9230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9230u, 0x28CC84u, 0x28CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28CC8Cu;
label_28cc8c:
    // 0x28cc8c: 0xafa20174  sw          $v0, 0x174($sp)
    ctx->pc = 0x28cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
    // 0x28cc90: 0x8fb50174  lw          $s5, 0x174($sp)
    ctx->pc = 0x28cc90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
    // 0x28cc94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cc98: 0x12a30075  beq         $s5, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x28CC98u;
    {
        const bool branch_taken_0x28cc98 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 3));
        if (branch_taken_0x28cc98) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CCA0u;
    // 0x28cca0: 0x8e03685c  lw          $v1, 0x685C($s0)
    ctx->pc = 0x28cca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 26716)));
    // 0x28cca4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x28cca4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x28cca8: 0xae03685c  sw          $v1, 0x685C($s0)
    ctx->pc = 0x28cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 26716), GPR_U32(ctx, 3));
    // 0x28ccac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ccacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ccb0: 0x8c2320f8  lw          $v1, 0x20F8($at)
    ctx->pc = 0x28ccb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6220F8u));
    // 0x28ccb4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28ccb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28ccb8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x28ccb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x28ccbc: 0xac2320f8  sw          $v1, 0x20F8($at)
    ctx->pc = 0x28ccbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6220F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6220F8u, _value); } while (0);
    // 0x28ccc0: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x28CCC0u;
    {
        const bool branch_taken_0x28ccc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccc0) {
            ctx->pc = 0x28CE70u;
            return;
        }
    }
    ctx->pc = 0x28CCC8u;
}
