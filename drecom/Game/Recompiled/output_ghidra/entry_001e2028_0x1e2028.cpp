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

// Function: entry_001e2028
// Address: 0x1e2028 - 0x1e2080
void entry_001e2028_0x1e2028(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e2028_0x1e2028");
#endif

    switch (ctx->pc) {
        case 0x1e2064u: goto label_1e2064;
        case 0x1e207cu: goto label_1e207c;
        default: break;
    }

    ctx->pc = 0x1e2028u;

    // 0x1e2028: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e202c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x1e202cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2030: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e2030u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e2034: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1e2034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x1e2038: 0xc60100c4  lwc1        $f1, 0xC4($s0)
    ctx->pc = 0x1e2038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e203c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1e203cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x1e2040: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e2040u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e2044: 0x0  nop
    ctx->pc = 0x1e2044u;
    // NOP
    // 0x1e2048: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e2048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e204c: 0xe60000c4  swc1        $f0, 0xC4($s0)
    ctx->pc = 0x1e204cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 196), bits); }
    // 0x1e2050: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1e2050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2054: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x1e2054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1e2058: 0x26060080  addiu       $a2, $s0, 0x80
    ctx->pc = 0x1e2058u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e205c: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E205Cu;
    SET_GPR_U32(ctx, 31, 0x1E2064u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E205Cu, 0x1E2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E2064u;
label_1e2064:
    // 0x1e2064: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x1e2064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x1e2068: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x1e2068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x1e206c: 0x2445e550  addiu       $a1, $v0, -0x1AB0
    ctx->pc = 0x1e206cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960464));
    // 0x1e2070: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x1e2070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x1e2074: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x1E2074u;
    SET_GPR_U32(ctx, 31, 0x1E207Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x1E2074u, 0x1E207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E207Cu;
label_1e207c:
    // 0x1e207c: 0x0  nop
    ctx->pc = 0x1e207cu;
    // NOP
    ctx->pc = 0x1e2080u;
}
