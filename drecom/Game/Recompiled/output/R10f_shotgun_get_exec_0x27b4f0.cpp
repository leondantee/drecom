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

// Function: R10f_shotgun_get_exec
// Address: 0x27b4f0 - 0x27b654
void R10f_shotgun_get_exec_0x27b4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10f_shotgun_get_exec_0x27b4f0");
#endif

    switch (ctx->pc) {
        case 0x27b590u: goto label_27b590;
        case 0x27b59cu: goto label_27b59c;
        case 0x27b5a8u: goto label_27b5a8;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b644u: goto label_27b644;
        default: break;
    }

    ctx->pc = 0x27b4f0u;

    // 0x27b4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27b4f4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x27b4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x27b4f8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27b4fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b500: 0xa022d731  sb          $v0, -0x28CF($at)
    ctx->pc = 0x27b500u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5CD731u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x5CD731u, _value); } while (0);
    // 0x27b504: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b508: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b508u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b50c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x27b50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x27b510: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b514: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b518: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b518u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b51c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b520: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b520u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b524: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x27b524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x27b528: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b52c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b52cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b530: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b530u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b534: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b538: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b538u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b53c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27b53cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x27b540: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b544: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b548: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b548u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b54c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b550: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b550u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b554: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x27b554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x27b558: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27b558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27b55c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b55cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b560: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b560u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b564: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b568: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x27b568u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b56c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x27b56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x27b570: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b570u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b574: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b574u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b578: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27b578u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b57c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x27b57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b580: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x27b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27b584: 0x240600c8  addiu       $a2, $zero, 0xC8
    ctx->pc = 0x27b584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x27b588: 0xc0654fc  jal         func_1953F0
    ctx->pc = 0x27B588u;
    SET_GPR_U32(ctx, 31, 0x27B590u);
    ctx->pc = 0x1953F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1953F0u, 0x27B588u, 0x27B590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B590u;
label_27b590:
    // 0x27b590: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b594: 0xc084964  jal         func_212590
    ctx->pc = 0x27B594u;
    SET_GPR_U32(ctx, 31, 0x27B59Cu);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B594u, 0x27B59Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B59Cu;
label_27b59c:
    // 0x27b59c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x27b59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x27b5a0: 0xc0a12a8  jal         func_284AA0
    ctx->pc = 0x27B5A0u;
    SET_GPR_U32(ctx, 31, 0x27B5A8u);
    ctx->pc = 0x284AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284AA0u, 0x27B5A0u, 0x27B5A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5A8u;
label_27b5a8:
    // 0x27b5a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x27b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27b5ac: 0xc084964  jal         func_212590
    ctx->pc = 0x27B5ACu;
    SET_GPR_U32(ctx, 31, 0x27B5B4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27B5ACu, 0x27B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5B4u;
label_27b5b4:
    // 0x27b5b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b5b8: 0x8c221a48  lw          $v0, 0x1A48($at)
    ctx->pc = 0x27b5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b5bc: 0x2107c  dsll32      $v0, $v0, 1
    ctx->pc = 0x27b5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 1));
    // 0x27b5c0: 0x2107e  dsrl32      $v0, $v0, 1
    ctx->pc = 0x27b5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 1));
    // 0x27b5c4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b5c8: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b5c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b5cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b5d0: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b5d4: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x27b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
    // 0x27b5d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27b5dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b5dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b5e0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b5e4: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b5e4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b5e8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b5ec: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b5f0: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x27b5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x27b5f4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27b5f8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b5fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b600: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b600u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b604: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b604u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b608: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b608u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b60c: 0x3c02fbff  lui         $v0, 0xFBFF
    ctx->pc = 0x27b60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64511 << 16));
    // 0x27b610: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27b610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27b614: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b618: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b61c: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b61cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b620: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b624: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x27b624u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x27b628: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x27b628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x27b62c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x27b62cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x27b630: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x27b630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27b634: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27b634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27b638: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x27b638u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x27b63c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27B63Cu;
    SET_GPR_U32(ctx, 31, 0x27B644u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27B63Cu, 0x27B644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B644u;
label_27b644:
    // 0x27b644: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x27b644u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b648: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x27b648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x27b64c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B654u;
}
