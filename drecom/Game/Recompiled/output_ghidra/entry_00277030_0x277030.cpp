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

// Function: entry_00277030
// Address: 0x277030 - 0x2771a0
void entry_00277030_0x277030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277030_0x277030");
#endif

    switch (ctx->pc) {
        case 0x277074u: goto label_277074;
        case 0x277080u: goto label_277080;
        case 0x2770a0u: goto label_2770a0;
        case 0x2770acu: goto label_2770ac;
        case 0x2770dcu: goto label_2770dc;
        case 0x2770e8u: goto label_2770e8;
        case 0x277118u: goto label_277118;
        case 0x277124u: goto label_277124;
        case 0x277144u: goto label_277144;
        case 0x277150u: goto label_277150;
        case 0x277180u: goto label_277180;
        case 0x27718cu: goto label_27718c;
        default: break;
    }

    ctx->pc = 0x277030u;

    // 0x277030: 0x1200ffa1  beqz        $s0, . + 4 + (-0x5F << 2)
    ctx->pc = 0x277030u;
    {
        const bool branch_taken_0x277030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x277030) {
            ctx->pc = 0x276EB8u;
            return;
        }
    }
    ctx->pc = 0x277038u;
    // 0x277038: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27703c: 0x2442d240  addiu       $v0, $v0, -0x2DC0
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955584));
    // 0x277040: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x277040u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x38D240u));
    // 0x277044: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277048: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x277048u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x27704c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x277050: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277050u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277054: 0x0  nop
    ctx->pc = 0x277054u;
    // NOP
    // 0x277058: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x27705c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27705cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277060: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277060u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277064: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277068: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277068u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27706c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27706Cu;
    SET_GPR_U32(ctx, 31, 0x277074u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27706Cu, 0x277074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277074u;
label_277074:
    // 0x277074: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277074u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277078: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277078u;
    SET_GPR_U32(ctx, 31, 0x277080u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277078u, 0x277080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277080u;
label_277080:
    // 0x277080: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277084: 0xac2219fc  sw          $v0, 0x19FC($at)
    ctx->pc = 0x277084u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6219FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6219FCu, _value); } while (0);
    // 0x277088: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x277088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x27708c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27708cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277090: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277094: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277094u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277098: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277098u;
    SET_GPR_U32(ctx, 31, 0x2770A0u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277098u, 0x2770A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770A0u;
label_2770a0:
    // 0x2770a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2770a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2770a4: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2770A4u;
    SET_GPR_U32(ctx, 31, 0x2770ACu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2770A4u, 0x2770ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770ACu;
label_2770ac:
    // 0x2770ac: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2770acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2770b0: 0xac221a00  sw          $v0, 0x1A00($at)
    ctx->pc = 0x2770b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A00u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A00u, _value); } while (0);
    // 0x2770b4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2770b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x2770b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2770b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2770bc: 0x0  nop
    ctx->pc = 0x2770bcu;
    // NOP
    // 0x2770c0: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2770c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x2770c4: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x2770c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x2770c8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2770c8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2770cc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2770ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2770d0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2770d0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2770d4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2770D4u;
    SET_GPR_U32(ctx, 31, 0x2770DCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2770D4u, 0x2770DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770DCu;
label_2770dc:
    // 0x2770dc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2770dcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2770e0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2770E0u;
    SET_GPR_U32(ctx, 31, 0x2770E8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2770E0u, 0x2770E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2770E8u;
label_2770e8:
    // 0x2770e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2770e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2770ec: 0xac221a04  sw          $v0, 0x1A04($at)
    ctx->pc = 0x2770ecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A04u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A04u, _value); } while (0);
    // 0x2770f0: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x2770f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x2770f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2770f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2770f8: 0x0  nop
    ctx->pc = 0x2770f8u;
    // NOP
    // 0x2770fc: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x2770fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277100: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x277100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277104: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277104u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277108: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27710c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27710cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277110: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277110u;
    SET_GPR_U32(ctx, 31, 0x277118u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277110u, 0x277118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277118u;
label_277118:
    // 0x277118: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277118u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x27711c: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x27711Cu;
    SET_GPR_U32(ctx, 31, 0x277124u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x27711Cu, 0x277124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277124u;
label_277124:
    // 0x277124: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277128: 0xac221a08  sw          $v0, 0x1A08($at)
    ctx->pc = 0x277128u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A08u, _value); } while (0);
    // 0x27712c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x27712cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x277130: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x277130u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277134: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277138: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277138u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27713c: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x27713Cu;
    SET_GPR_U32(ctx, 31, 0x277144u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x27713Cu, 0x277144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277144u;
label_277144:
    // 0x277144: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277144u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277148: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277148u;
    SET_GPR_U32(ctx, 31, 0x277150u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277148u, 0x277150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277150u;
label_277150:
    // 0x277150: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x277150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277154: 0xac221a0c  sw          $v0, 0x1A0C($at)
    ctx->pc = 0x277154u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A0Cu, _value); } while (0);
    // 0x277158: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x277158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x27715c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27715cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x277160: 0x0  nop
    ctx->pc = 0x277160u;
    // NOP
    // 0x277164: 0xe7a0002c  swc1        $f0, 0x2C($sp)
    ctx->pc = 0x277164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    // 0x277168: 0x24041718  addiu       $a0, $zero, 0x1718
    ctx->pc = 0x277168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5912));
    // 0x27716c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27716cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277170: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x277170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x277174: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277174u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277178: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277178u;
    SET_GPR_U32(ctx, 31, 0x277180u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277178u, 0x277180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277180u;
label_277180:
    // 0x277180: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x277180u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277184: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277184u;
    SET_GPR_U32(ctx, 31, 0x27718Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277184u, 0x27718Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27718Cu;
label_27718c:
    // 0x27718c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27718cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x277190: 0xac221a10  sw          $v0, 0x1A10($at)
    ctx->pc = 0x277190u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621A10u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x621A10u, _value); } while (0);
    // 0x277194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x277194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277198: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x277198u;
    {
        const bool branch_taken_0x277198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277198) {
            ctx->pc = 0x2771D8u;
            return;
        }
    }
    ctx->pc = 0x2771A0u;
}
