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

// Function: entry_001186ec
// Address: 0x1186ec - 0x118720
void entry_001186ec_0x1186ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001186ec_0x1186ec");
#endif

    ctx->pc = 0x1186ecu;

    // 0x1186ec: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1186ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1186f0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1186f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1186f4: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1186f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x1186f8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1186f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1186fc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1186fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x118700: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x118700u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x118704: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x118704u;
    {
        const bool branch_taken_0x118704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x118704) {
            ctx->pc = 0x118708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x118704u;
            // 0x118708: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x118720u;
            return;
        }
    }
    ctx->pc = 0x11870Cu;
    // 0x11870c: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x11870cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x118710: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118714: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x118714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x118718: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x118718u;
    {
        const bool branch_taken_0x118718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11871Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118718u;
        // 0x11871c: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118718) {
            ctx->pc = 0x118728u;
            return;
        }
    }
    ctx->pc = 0x118720u;
}
