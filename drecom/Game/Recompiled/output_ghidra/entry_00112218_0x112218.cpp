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

// Function: entry_00112218
// Address: 0x112218 - 0x112240
void entry_00112218_0x112218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112218_0x112218");
#endif

    ctx->pc = 0x112218u;

    // 0x112218: 0x1082ffb1  beq         $a0, $v0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x112218u;
    {
        const bool branch_taken_0x112218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x11221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112218u;
        // 0x11221c: 0x851023  subu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112218) {
            ctx->pc = 0x1120E0u;
            return;
        }
    }
    ctx->pc = 0x112220u;
    // 0x112220: 0x215c3  sra         $v0, $v0, 23
    ctx->pc = 0x112220u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 23));
    // 0x112224: 0x2843003d  slti        $v1, $v0, 0x3D
    ctx->pc = 0x112224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)61) ? 1 : 0);
    // 0x112228: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x112228u;
    {
        const bool branch_taken_0x112228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x112228) {
            ctx->pc = 0x112240u;
            return;
        }
    }
    ctx->pc = 0x112230u;
    // 0x112230: 0x3c033fc9  lui         $v1, 0x3FC9
    ctx->pc = 0x112230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16329 << 16));
    // 0x112234: 0x34630fdc  ori         $v1, $v1, 0xFDC
    ctx->pc = 0x112234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4060);
    // 0x112238: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x112238u;
    {
        const bool branch_taken_0x112238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112238u;
        // 0x11223c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112238) {
            ctx->pc = 0x112278u;
            return;
        }
    }
    ctx->pc = 0x112240u;
}
