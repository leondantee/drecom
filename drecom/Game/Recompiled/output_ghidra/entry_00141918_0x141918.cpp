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

// Function: entry_00141918
// Address: 0x141918 - 0x1419ac
void entry_00141918_0x141918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141918_0x141918");
#endif

    switch (ctx->pc) {
        case 0x141924u: goto label_141924;
        default: break;
    }

    ctx->pc = 0x141918u;

    // 0x141918: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x141918u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14191c: 0xc0592ec  jal         func_164BB0
    ctx->pc = 0x14191Cu;
    SET_GPR_U32(ctx, 31, 0x141924u);
    ctx->pc = 0x164BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x164BB0u, 0x14191Cu, 0x141924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141924u;
label_141924:
    // 0x141924: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x141924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x141928: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
    ctx->pc = 0x141928u;
    {
        const bool branch_taken_0x141928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x141928) {
            ctx->pc = 0x141B10u;
            return;
        }
    }
    ctx->pc = 0x141930u;
    // 0x141930: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141934: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141934u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141938: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x141938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x14193c: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x14193cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x141940: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141944: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141948: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141948u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x14194c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14194cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141950: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x141950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x141954: 0x3c02efff  lui         $v0, 0xEFFF
    ctx->pc = 0x141954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61439 << 16));
    // 0x141958: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x141958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x14195c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x14195cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x141960: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141964: 0xac221a48  sw          $v0, 0x1A48($at)
    ctx->pc = 0x141964u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A48u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A48u, _value); } while (0);
    // 0x141968: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x14196c: 0x90220e04  lbu         $v0, 0xE04($at)
    ctx->pc = 0x14196cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x5D0E04u));
    // 0x141970: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x141970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x141974: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x141974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x141978: 0xac229198  sw          $v0, -0x6E68($at)
    ctx->pc = 0x141978u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3E9198u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3E9198u, _value); } while (0);
    // 0x14197c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x14197cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141980: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x141980u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x141984: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x141984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x141988: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x141988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x14198c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14198Cu;
    {
        const bool branch_taken_0x14198c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14198c) {
            ctx->pc = 0x1419ACu;
            return;
        }
    }
    ctx->pc = 0x141994u;
    // 0x141994: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x141994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x141998: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x141998u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5CFCE0u));
    // 0x14199c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x14199cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1419a0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1419a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1419a4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1419A4u;
    {
        const bool branch_taken_0x1419a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1419a4) {
            ctx->pc = 0x141A0Cu;
            return;
        }
    }
    ctx->pc = 0x1419ACu;
}
