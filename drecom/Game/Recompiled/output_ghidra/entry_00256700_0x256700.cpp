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

// Function: entry_00256700
// Address: 0x256700 - 0x256724
void entry_00256700_0x256700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00256700_0x256700");
#endif

    ctx->pc = 0x256700u;

    // 0x256700: 0x32420e00  andi        $v0, $s2, 0xE00
    ctx->pc = 0x256700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3584);
    // 0x256704: 0x21242  srl         $v0, $v0, 9
    ctx->pc = 0x256704u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 9));
    // 0x256708: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x256708u;
    {
        const bool branch_taken_0x256708 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x256708) {
            ctx->pc = 0x256724u;
            return;
        }
    }
    ctx->pc = 0x256710u;
    // 0x256710: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x256710u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x256714: 0x0  nop
    ctx->pc = 0x256714u;
    // NOP
    // 0x256718: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x256718u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x25671c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25671Cu;
    {
        const bool branch_taken_0x25671c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25671c) {
            ctx->pc = 0x256740u;
            return;
        }
    }
    ctx->pc = 0x256724u;
}
