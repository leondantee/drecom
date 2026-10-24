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

// Function: entry_0034699c
// Address: 0x34699c - 0x3469e8
void entry_0034699c_0x34699c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034699c_0x34699c");
#endif

    ctx->pc = 0x34699cu;

    // 0x34699c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x34699cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469a0: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3469a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3469a4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3469a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3469a8: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x3469a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x3469ac: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3469ACu;
    {
        const bool branch_taken_0x3469ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469ac) {
            ctx->pc = 0x3469E8u;
            return;
        }
    }
    ctx->pc = 0x3469B4u;
    // 0x3469b4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469b8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3469b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3469bc: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x3469bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x3469c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3469c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3469c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469c8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x3469c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x3469cc: 0xa0640029  sb          $a0, 0x29($v1)
    ctx->pc = 0x3469ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 4));
    // 0x3469d0: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x3469d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
    // 0x3469d4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x3469d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x3469d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3469d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3469dc: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x3469dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469e0: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x3469e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x3469e4: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x3469e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    ctx->pc = 0x3469e8u;
}
