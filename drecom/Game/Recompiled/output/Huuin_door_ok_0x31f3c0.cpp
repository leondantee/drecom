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

// Function: Huuin_door_ok
// Address: 0x31f3c0 - 0x31f4b4
void Huuin_door_ok_0x31f3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Huuin_door_ok_0x31f3c0");
#endif

    switch (ctx->pc) {
        case 0x31f3e8u: goto label_31f3e8;
        case 0x31f460u: goto label_31f460;
        case 0x31f46cu: goto label_31f46c;
        case 0x31f4a4u: goto label_31f4a4;
        default: break;
    }

    ctx->pc = 0x31f3c0u;

    // 0x31f3c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x31f3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x31f3c4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x31f3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x31f3c8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x31f3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x31f3cc: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x31f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x31f3d0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x31f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x31f3d4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x31f3d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x31f3d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f3dc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x31f3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f3e0: 0xc0a56f0  jal         func_295BC0
    ctx->pc = 0x31F3E0u;
    SET_GPR_U32(ctx, 31, 0x31F3E8u);
    ctx->pc = 0x295BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295BC0u, 0x31F3E0u, 0x31F3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F3E8u;
label_31f3e8:
    // 0x31f3e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f3e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f3ec: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x31f3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f3f0: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x31f3f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x31f3f4: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x31f3f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x31f3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f3fc: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f3fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f400: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f400u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f404: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f404u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f408: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x31f408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x31f40c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f410: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f414: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f418: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f418u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f41c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f41cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f420: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f420u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f424: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x31f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x31f428: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f42c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f430: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f434: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f434u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f438: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f43c: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x31f43cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x31f440: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x31f440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x31f444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x31f444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x31f448: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x31f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x31f44c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x31f44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x31f450: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x31f450u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x31f454: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x31f458: 0xc084964  jal         func_212590
    ctx->pc = 0x31F458u;
    SET_GPR_U32(ctx, 31, 0x31F460u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x31F458u, 0x31F460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F460u;
label_31f460:
    // 0x31f460: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x31f460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31f464: 0xc0d7eec  jal         func_35FBB0
    ctx->pc = 0x31F464u;
    SET_GPR_U32(ctx, 31, 0x31F46Cu);
    ctx->pc = 0x35FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35FBB0u, 0x31F464u, 0x31F46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F46Cu;
label_31f46c:
    // 0x31f46c: 0x3c02469c  lui         $v0, 0x469C
    ctx->pc = 0x31f46cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18076 << 16));
    // 0x31f470: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x31f470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x31f474: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x31f474u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x31f478: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x31f478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x31f47c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x31f47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x31f480: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x31f484: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x31f484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x31f488: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x31f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x31f48c: 0x8c421390  lw          $v0, 0x1390($v0)
    ctx->pc = 0x31f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5008)));
    // 0x31f490: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x31f490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x31f494: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x31f494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x31f498: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x31f498u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x31f49c: 0xc067b18  jal         func_19EC60
    ctx->pc = 0x31F49Cu;
    SET_GPR_U32(ctx, 31, 0x31F4A4u);
    ctx->pc = 0x19EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19EC60u, 0x31F49Cu, 0x31F4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31F4A4u;
label_31f4a4:
    // 0x31f4a4: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x31f4a4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31f4a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x31f4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x31f4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x31F4ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31F4ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31F4B4u;
}
