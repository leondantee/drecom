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

// Function: entry_002f0cdc
// Address: 0x2f0cdc - 0x2f0d38
void entry_002f0cdc_0x2f0cdc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002f0cdc_0x2f0cdc");
#endif

    switch (ctx->pc) {
        case 0x2f0cecu: goto label_2f0cec;
        default: break;
    }

    ctx->pc = 0x2f0cdcu;

    // 0x2f0cdc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x2f0cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x2f0ce0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x2f0ce0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f0ce4: 0xc067648  jal         func_19D920
    ctx->pc = 0x2F0CE4u;
    SET_GPR_U32(ctx, 31, 0x2F0CECu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x2F0CE4u, 0x2F0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CECu;
label_2f0cec:
    // 0x2f0cec: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2f0cecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2f0cf0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0cf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0cf4: 0x0  nop
    ctx->pc = 0x2f0cf4u;
    // NOP
    // 0x2f0cf8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2f0cf8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2f0cfc: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2f0cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
    // 0x2f0d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d04: 0x0  nop
    ctx->pc = 0x2f0d04u;
    // NOP
    // 0x2f0d08: 0x46010080  add.s       $f2, $f0, $f1
    ctx->pc = 0x2f0d08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f0d0c: 0x3c023d75  lui         $v0, 0x3D75
    ctx->pc = 0x2f0d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15733 << 16));
    // 0x2f0d10: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x2f0d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x2f0d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f0d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f0d18: 0x93a20088  lbu         $v0, 0x88($sp)
    ctx->pc = 0x2f0d18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2f0d1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F0D1Cu;
    {
        const bool branch_taken_0x2f0d1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f0d1c) {
            ctx->pc = 0x2F0D38u;
            return;
        }
    }
    ctx->pc = 0x2F0D24u;
    // 0x2f0d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f0d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f0d28: 0x0  nop
    ctx->pc = 0x2f0d28u;
    // NOP
    // 0x2f0d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f0d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f0d30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F0D30u;
    {
        const bool branch_taken_0x2f0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f0d30) {
            ctx->pc = 0x2F0D54u;
            return;
        }
    }
    ctx->pc = 0x2F0D38u;
}
