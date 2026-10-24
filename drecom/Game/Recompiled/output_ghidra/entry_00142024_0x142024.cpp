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

// Function: entry_00142024
// Address: 0x142024 - 0x1420d0
void entry_00142024_0x142024(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00142024_0x142024");
#endif

    switch (ctx->pc) {
        case 0x142030u: goto label_142030;
        case 0x142074u: goto label_142074;
        case 0x14208cu: goto label_14208c;
        case 0x1420a8u: goto label_1420a8;
        case 0x1420c4u: goto label_1420c4;
        default: break;
    }

    ctx->pc = 0x142024u;

    // 0x142024: 0x24040190  addiu       $a0, $zero, 0x190
    ctx->pc = 0x142024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x142028: 0xc067e5c  jal         func_19F970
    ctx->pc = 0x142028u;
    SET_GPR_U32(ctx, 31, 0x142030u);
    ctx->pc = 0x19F970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19F970u, 0x142028u, 0x142030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142030u;
label_142030:
    // 0x142030: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142030u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142034: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x142034u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142038: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x142038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x14203c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x14203cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x142040: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142040u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142044: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142044u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x142048: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14204c: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x14204cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x142050: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x142050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x142054: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x142054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x142058: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x142058u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14205c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x14205cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142060: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x142060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142064: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x142064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142068: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x142068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14206c: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x14206Cu;
    SET_GPR_U32(ctx, 31, 0x142074u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x14206Cu, 0x142074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142074u;
label_142074:
    // 0x142074: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x142074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142078: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x142078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x14207c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x14207cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142080: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x142080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x142084: 0xc065580  jal         func_195600
    ctx->pc = 0x142084u;
    SET_GPR_U32(ctx, 31, 0x14208Cu);
    ctx->pc = 0x195600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195600u, 0x142084u, 0x14208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14208Cu;
label_14208c:
    // 0x14208c: 0x2410001e  addiu       $s0, $zero, 0x1E
    ctx->pc = 0x14208cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x142090: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x142090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x142094: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x142094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x142098: 0x2445cc60  addiu       $a1, $v0, -0x33A0
    ctx->pc = 0x142098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954080));
    // 0x14209c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x14209cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1420a0: 0xc0462a6  jal         func_118A98
    ctx->pc = 0x1420A0u;
    SET_GPR_U32(ctx, 31, 0x1420A8u);
    ctx->pc = 0x118A98u;
    {
        ctx->pc = 0x1420A8u;
        ps2_stubs::memcpy(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1420A8u) { return; }
    ctx->pc = 0x1420A8u;
label_1420a8:
    // 0x1420a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1420a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1420ac: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1420acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1420b0: 0xe420cc60  swc1        $f0, -0x33A0($at)
    ctx->pc = 0x1420b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47CC60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47CC60u, _value); } while (0); }
    // 0x1420b4: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x1420b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x1420b8: 0xa020cc95  sb          $zero, -0x336B($at)
    ctx->pc = 0x1420b8u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x47CC95u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x47CC95u, _value); } while (0);
    // 0x1420bc: 0xc0508e4  jal         func_142390
    ctx->pc = 0x1420BCu;
    SET_GPR_U32(ctx, 31, 0x1420C4u);
    ctx->pc = 0x142390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x142390u, 0x1420BCu, 0x1420C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1420C4u;
label_1420c4:
    // 0x1420c4: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x1420c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
    // 0x1420c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1420c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1420cc: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x1420ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1420d0u;
}
