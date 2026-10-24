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

// Function: entry_002f41d0
// Address: 0x2f41d0 - 0x2f41fc
void entry_002f41d0_0x2f41d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f41d0_0x2f41d0");
#endif

    ctx->pc = 0x2f41d0u;

    // 0x2f41d0: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2f41d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x2f41d4: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2f41d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x2f41d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f41d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f41dc: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f41dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f41e0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F41E0u;
    {
        const bool branch_taken_0x2f41e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f41e0) {
            ctx->pc = 0x2F41FCu;
            return;
        }
    }
    ctx->pc = 0x2F41E8u;
    // 0x2f41e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f41e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f41ec: 0x0  nop
    ctx->pc = 0x2f41ecu;
    // NOP
    // 0x2f41f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f41f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f41f4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F41F4u;
    {
        const bool branch_taken_0x2f41f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f41f4) {
            ctx->pc = 0x2F4218u;
            return;
        }
    }
    ctx->pc = 0x2F41FCu;
}
