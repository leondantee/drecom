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

// Function: entry_0032502c
// Address: 0x32502c - 0x325058
void entry_0032502c_0x32502c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032502c_0x32502c");
#endif

    ctx->pc = 0x32502cu;

    // 0x32502c: 0x3c023b80  lui         $v0, 0x3B80
    ctx->pc = 0x32502cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15232 << 16));
    // 0x325030: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x325030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
    // 0x325034: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x325034u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x325038: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x325038u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x32503c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x32503Cu;
    {
        const bool branch_taken_0x32503c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x32503c) {
            ctx->pc = 0x325058u;
            return;
        }
    }
    ctx->pc = 0x325044u;
    // 0x325044: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x325044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x325048: 0x0  nop
    ctx->pc = 0x325048u;
    // NOP
    // 0x32504c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x32504cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x325050: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x325050u;
    {
        const bool branch_taken_0x325050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x325050) {
            ctx->pc = 0x325074u;
            return;
        }
    }
    ctx->pc = 0x325058u;
}
