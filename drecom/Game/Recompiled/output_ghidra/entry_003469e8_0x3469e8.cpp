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

// Function: entry_003469e8
// Address: 0x3469e8 - 0x346a30
void entry_003469e8_0x3469e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003469e8_0x3469e8");
#endif

    ctx->pc = 0x3469e8u;

    // 0x3469e8: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x3469e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3469ec: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x3469ecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x3469f0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3469f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3469f4: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x3469f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x3469f8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3469F8u;
    {
        const bool branch_taken_0x3469f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3469f8) {
            ctx->pc = 0x346A30u;
            return;
        }
    }
    ctx->pc = 0x346A00u;
    // 0x346a00: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a04: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346a08: 0xa0600028  sb          $zero, 0x28($v1)
    ctx->pc = 0x346a08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 0));
    // 0x346a0c: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x346a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a10: 0x24831330  addiu       $v1, $a0, 0x1330
    ctx->pc = 0x346a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x346a14: 0xa0600029  sb          $zero, 0x29($v1)
    ctx->pc = 0x346a14u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x346a18: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x346a18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
    // 0x346a1c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x346a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x346a20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x346a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x346a24: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x346a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x346a28: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x346a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x346a2c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x346a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    ctx->pc = 0x346a30u;
}
