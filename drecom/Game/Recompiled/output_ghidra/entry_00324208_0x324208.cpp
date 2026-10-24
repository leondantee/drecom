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

// Function: entry_00324208
// Address: 0x324208 - 0x32425c
void entry_00324208_0x324208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00324208_0x324208");
#endif

    switch (ctx->pc) {
        case 0x324210u: goto label_324210;
        default: break;
    }

    ctx->pc = 0x324208u;

    // 0x324208: 0xc067648  jal         func_19D920
    ctx->pc = 0x324208u;
    SET_GPR_U32(ctx, 31, 0x324210u);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x324208u, 0x324210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324210u;
label_324210:
    // 0x324210: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x324210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x324214: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324214u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x324218: 0x0  nop
    ctx->pc = 0x324218u;
    // NOP
    // 0x32421c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x32421cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x324220: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x324220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x324224: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324224u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x324228: 0x0  nop
    ctx->pc = 0x324228u;
    // NOP
    // 0x32422c: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x32422cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x324230: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x324230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x324234: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x324234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x324238: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x324238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x32423c: 0x93a20068  lbu         $v0, 0x68($sp)
    ctx->pc = 0x32423cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x324240: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x324240u;
    {
        const bool branch_taken_0x324240 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x324240) {
            ctx->pc = 0x32425Cu;
            return;
        }
    }
    ctx->pc = 0x324248u;
    // 0x324248: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x324248u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x32424c: 0x0  nop
    ctx->pc = 0x32424cu;
    // NOP
    // 0x324250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x324250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x324254: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x324254u;
    {
        const bool branch_taken_0x324254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x324254) {
            ctx->pc = 0x324278u;
            return;
        }
    }
    ctx->pc = 0x32425Cu;
}
