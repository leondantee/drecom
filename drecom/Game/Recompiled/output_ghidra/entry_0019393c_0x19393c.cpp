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

// Function: entry_0019393c
// Address: 0x19393c - 0x1939ac
void entry_0019393c_0x19393c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019393c_0x19393c");
#endif

    switch (ctx->pc) {
        case 0x193984u: goto label_193984;
        default: break;
    }

    ctx->pc = 0x19393cu;

    // 0x19393c: 0xc6c00294  lwc1        $f0, 0x294($s6)
    ctx->pc = 0x19393cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x193940: 0x0  nop
    ctx->pc = 0x193940u;
    // NOP
    // 0x193944: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x193944u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x193948: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x193948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x19394c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x19394cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193954: 0x0  nop
    ctx->pc = 0x193954u;
    // NOP
    // 0x193958: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x193958u;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x19395c: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x19395cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
    // 0x193960: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x193960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x193964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x193968: 0x0  nop
    ctx->pc = 0x193968u;
    // NOP
    // 0x19396c: 0x4600ab03  div.s       $f12, $f21, $f0
    ctx->pc = 0x19396cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x193970: 0x0  nop
    ctx->pc = 0x193970u;
    // NOP
    // 0x193974: 0x0  nop
    ctx->pc = 0x193974u;
    // NOP
    // 0x193978: 0x0  nop
    ctx->pc = 0x193978u;
    // NOP
    // 0x19397c: 0xc047fa2  jal         func_11FE88
    ctx->pc = 0x19397Cu;
    SET_GPR_U32(ctx, 31, 0x193984u);
    ctx->pc = 0x11FE88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FE88u, 0x19397Cu, 0x193984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x193984u;
label_193984:
    // 0x193984: 0x3c0340c9  lui         $v1, 0x40C9
    ctx->pc = 0x193984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16585 << 16));
    // 0x193988: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x193988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x19398c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x19398cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x193990: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x193990u;
    {
        const bool branch_taken_0x193990 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x193990) {
            ctx->pc = 0x1939ACu;
            return;
        }
    }
    ctx->pc = 0x193998u;
    // 0x193998: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x193998u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19399c: 0x0  nop
    ctx->pc = 0x19399cu;
    // NOP
    // 0x1939a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1939a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1939a4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1939A4u;
    {
        const bool branch_taken_0x1939a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1939a4) {
            ctx->pc = 0x1939C8u;
            return;
        }
    }
    ctx->pc = 0x1939ACu;
}
