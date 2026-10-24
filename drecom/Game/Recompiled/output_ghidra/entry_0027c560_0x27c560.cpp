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

// Function: entry_0027c560
// Address: 0x27c560 - 0x27c608
void entry_0027c560_0x27c560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027c560_0x27c560");
#endif

    switch (ctx->pc) {
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5e8u: goto label_27c5e8;
        default: break;
    }

    ctx->pc = 0x27c560u;

    // 0x27c560: 0x2e220014  sltiu       $v0, $s1, 0x14
    ctx->pc = 0x27c560u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x27c564: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x27C564u;
    {
        const bool branch_taken_0x27c564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c564) {
            ctx->pc = 0x27C4F8u;
            return;
        }
    }
    ctx->pc = 0x27C56Cu;
    // 0x27c56c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c570: 0x90221b4c  lbu         $v0, 0x1B4C($at)
    ctx->pc = 0x27c570u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x621B4Cu));
    // 0x27c574: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27c574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x27c578: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x27c578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x27c57c: 0xa0221b4c  sb          $v0, 0x1B4C($at)
    ctx->pc = 0x27c57cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x621B4Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x621B4Cu, _value); } while (0);
    // 0x27c580: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c584: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c584u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c588: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x27c588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x27c58c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27c58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c590: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c590u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c594: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c594u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c598: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c59c: 0x8c231a9c  lw          $v1, 0x1A9C($at)
    ctx->pc = 0x27c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A9Cu));
    // 0x27c5a0: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x27c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x27c5a4: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x27c5a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x27c5a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27c5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27c5ac: 0xac221a9c  sw          $v0, 0x1A9C($at)
    ctx->pc = 0x27c5acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A9Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A9Cu, _value); } while (0);
    // 0x27c5b0: 0xc09f3a0  jal         func_27CE80
    ctx->pc = 0x27C5B0u;
    SET_GPR_U32(ctx, 31, 0x27C5B8u);
    ctx->pc = 0x27CE80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27CE80u, 0x27C5B0u, 0x27C5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5B8u;
label_27c5b8:
    // 0x27c5b8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x27c5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x27c5bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27c5bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27c5c0: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x27c5c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c5c4: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27c5c4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c5c8: 0x24060173  addiu       $a2, $zero, 0x173
    ctx->pc = 0x27c5c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 371));
    // 0x27c5cc: 0xc0561d4  jal         func_158750
    ctx->pc = 0x27C5CCu;
    SET_GPR_U32(ctx, 31, 0x27C5D4u);
    ctx->pc = 0x158750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158750u, 0x27C5CCu, 0x27C5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5D4u;
label_27c5d4:
    // 0x27c5d4: 0x3c020600  lui         $v0, 0x600
    ctx->pc = 0x27c5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1536 << 16));
    // 0x27c5d8: 0x3444a0a0  ori         $a0, $v0, 0xA0A0
    ctx->pc = 0x27c5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41120);
    // 0x27c5dc: 0x3c050173  lui         $a1, 0x173
    ctx->pc = 0x27c5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)371 << 16));
    // 0x27c5e0: 0xc0684d8  jal         func_1A1360
    ctx->pc = 0x27C5E0u;
    SET_GPR_U32(ctx, 31, 0x27C5E8u);
    ctx->pc = 0x1A1360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1360u, 0x27C5E0u, 0x27C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27C5E8u;
label_27c5e8:
    // 0x27c5e8: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x27c5e8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x27c5ec: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x27c5ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x27c5f0: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x27c5f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x27c5f4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x27c5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x27c5f8: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x27c5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x27c5fc: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x27c5fcu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27c600: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27C600u;
    {
        const bool branch_taken_0x27c600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27c600) {
            ctx->pc = 0x27C630u;
            return;
        }
    }
    ctx->pc = 0x27C608u;
}
