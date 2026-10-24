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

// Function: entry_002f0fcc
// Address: 0x2f0fcc - 0x2f0ff8
void entry_002f0fcc_0x2f0fcc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0fcc_0x2f0fcc");
#endif

    ctx->pc = 0x2f0fccu;

    // 0x2f0fcc: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x2f0fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x2f0fd0: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x2f0fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x2f0fd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0fd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0fd8: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0fd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0fdc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0FDCu;
    {
        const bool branch_taken_0x2f0fdc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0fdc) {
            ctx->pc = 0x2F0FF8u;
            return;
        }
    }
    ctx->pc = 0x2F0FE4u;
    // 0x2f0fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0fe8: 0x0  nop
    ctx->pc = 0x2f0fe8u;
    // NOP
    // 0x2f0fec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0fecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0ff0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0FF0u;
    {
        const bool branch_taken_0x2f0ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0ff0) {
            ctx->pc = 0x2F1014u;
            return;
        }
    }
    ctx->pc = 0x2F0FF8u;
}
