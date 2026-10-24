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

// Function: entry_001118dc
// Address: 0x1118dc - 0x111910
void entry_001118dc_0x1118dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001118dc_0x1118dc");
#endif

    ctx->pc = 0x1118dcu;

    // 0x1118dc: 0x3c023eff  lui         $v0, 0x3EFF
    ctx->pc = 0x1118dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16127 << 16));
    // 0x1118e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1118e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1118e4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1118e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118e8: 0x1440004a  bnez        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x1118E8u;
    {
        const bool branch_taken_0x1118e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1118ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1118E8u;
        // 0x1118ec: 0x3c022300  lui         $v0, 0x2300 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8960 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1118e8) {
            ctx->pc = 0x111A14u;
            return;
        }
    }
    ctx->pc = 0x1118F0u;
    // 0x1118f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1118f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1118f4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1118F4u;
    {
        const bool branch_taken_0x1118f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1118f4) {
            ctx->pc = 0x1118F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1118F4u;
            // 0x1118f8: 0x460b5d42  mul.s       $f21, $f11, $f11 (Delay Slot)
            ctx->f[21] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x111910u;
            return;
        }
    }
    ctx->pc = 0x1118FCu;
    // 0x1118fc: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1118fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x111900: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x111900u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x111904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x111904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x111908: 0x100000dc  b           . + 4 + (0xDC << 2)
    ctx->pc = 0x111908u;
    {
        const bool branch_taken_0x111908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11190Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111908u;
        // 0x11190c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111908) {
            ctx->pc = 0x111C7Cu;
            return;
        }
    }
    ctx->pc = 0x111910u;
}
