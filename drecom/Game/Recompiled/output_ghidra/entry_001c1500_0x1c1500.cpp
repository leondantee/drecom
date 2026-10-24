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

// Function: entry_001c1500
// Address: 0x1c1500 - 0x1c159c
void entry_001c1500_0x1c1500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c1500_0x1c1500");
#endif

    switch (ctx->pc) {
        case 0x1c1510u: goto label_1c1510;
        case 0x1c151cu: goto label_1c151c;
        case 0x1c1530u: goto label_1c1530;
        case 0x1c153cu: goto label_1c153c;
        default: break;
    }

    ctx->pc = 0x1c1500u;

    // 0x1c1500: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1504: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1504u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1508: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x1C1508u;
    SET_GPR_U32(ctx, 31, 0x1C1510u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x1C1508u, 0x1C1510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1510u;
label_1c1510:
    // 0x1c1510: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1514: 0xc05cd10  jal         func_173440
    ctx->pc = 0x1C1514u;
    SET_GPR_U32(ctx, 31, 0x1C151Cu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x1C1514u, 0x1C151Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C151Cu;
label_1c151c:
    // 0x1c151c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1c151cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1c1520: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x1c1520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1524: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x1c1524u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1c1528: 0xc0573d8  jal         func_15CF60
    ctx->pc = 0x1C1528u;
    SET_GPR_U32(ctx, 31, 0x1C1530u);
    ctx->pc = 0x15CF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15CF60u, 0x1C1528u, 0x1C1530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C1530u;
label_1c1530:
    // 0x1c1530: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1c1530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c1534: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1C1534u;
    SET_GPR_U32(ctx, 31, 0x1C153Cu);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1C1534u, 0x1C153Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C153Cu;
label_1c153c:
    // 0x1c153c: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1540: 0x9063107f  lbu         $v1, 0x107F($v1)
    ctx->pc = 0x1c1540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4223)));
    // 0x1c1544: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c1544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c1548: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x1c1548u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x1c154c: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C154Cu;
    {
        const bool branch_taken_0x1c154c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c154c) {
            ctx->pc = 0x1C15BCu;
            return;
        }
    }
    ctx->pc = 0x1C1554u;
    // 0x1c1554: 0x8e03009c  lw          $v1, 0x9C($s0)
    ctx->pc = 0x1c1554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1c1558: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1c1558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1c155c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1C155Cu;
    {
        const bool branch_taken_0x1c155c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c155c) {
            ctx->pc = 0x1C15BCu;
            return;
        }
    }
    ctx->pc = 0x1C1564u;
    // 0x1c1564: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c1564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1568: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1c1568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1c156c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x1c156cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x1c1570: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1c1570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1c1574: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C1574u;
    {
        const bool branch_taken_0x1c1574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1574) {
            ctx->pc = 0x1C15BCu;
            return;
        }
    }
    ctx->pc = 0x1C157Cu;
    // 0x1c157c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1580: 0x904213f9  lbu         $v0, 0x13F9($v0)
    ctx->pc = 0x1c1580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5113)));
    // 0x1c1584: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C1584u;
    {
        const bool branch_taken_0x1c1584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1584) {
            ctx->pc = 0x1C159Cu;
            return;
        }
    }
    ctx->pc = 0x1C158Cu;
    // 0x1c158c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1c158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c1590: 0xa04013f9  sb          $zero, 0x13F9($v0)
    ctx->pc = 0x1c1590u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5113), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c1594: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C1594u;
    {
        const bool branch_taken_0x1c1594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1594) {
            ctx->pc = 0x1C15A8u;
            return;
        }
    }
    ctx->pc = 0x1C159Cu;
}
