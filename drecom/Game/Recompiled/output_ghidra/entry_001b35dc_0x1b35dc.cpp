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

// Function: entry_001b35dc
// Address: 0x1b35dc - 0x1b3674
void entry_001b35dc_0x1b35dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b35dc_0x1b35dc");
#endif

    switch (ctx->pc) {
        case 0x1b35e8u: goto label_1b35e8;
        case 0x1b3600u: goto label_1b3600;
        case 0x1b3610u: goto label_1b3610;
        case 0x1b3628u: goto label_1b3628;
        case 0x1b363cu: goto label_1b363c;
        default: break;
    }

    ctx->pc = 0x1b35dcu;

    // 0x1b35dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b35dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35e0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1B35E0u;
    SET_GPR_U32(ctx, 31, 0x1B35E8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1B35E8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B35E8u) { return; }
    ctx->pc = 0x1B35E8u;
label_1b35e8:
    // 0x1b35e8: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b35e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b35ec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b35ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35f0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b35f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b35f4: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1b35f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b35f8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1B35F8u;
    SET_GPR_U32(ctx, 31, 0x1B3600u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1B3600u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3600u) { return; }
    ctx->pc = 0x1B3600u;
label_1b3600:
    // 0x1b3600: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1b3600u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3604: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b3604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3608: 0xc040c32  jal         func_1030C8
    ctx->pc = 0x1B3608u;
    SET_GPR_U32(ctx, 31, 0x1B3610u);
    ctx->pc = 0x1030C8u;
    {
        ctx->pc = 0x1B3610u;
        ps2_stubs::sceVu0TransposeMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B3610u) { return; }
    ctx->pc = 0x1B3610u;
label_1b3610:
    // 0x1b3610: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x1b3610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b3614: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b3614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3618: 0x26050120  addiu       $a1, $s0, 0x120
    ctx->pc = 0x1b3618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 288));
    // 0x1b361c: 0x24460120  addiu       $a2, $v0, 0x120
    ctx->pc = 0x1b361cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x1b3620: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x1B3620u;
    SET_GPR_U32(ctx, 31, 0x1B3628u);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x1B3620u, 0x1B3628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B3628u;
label_1b3628:
    // 0x1b3628: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x1b3628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b362c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1b362cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1b3630: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x1b3630u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1b3634: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1B3634u;
    SET_GPR_U32(ctx, 31, 0x1B363Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1B363Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1B363Cu) { return; }
    ctx->pc = 0x1B363Cu;
label_1b363c:
    // 0x1b363c: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x1b363cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3640: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b3644: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1b3644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3648: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b3648u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b364c: 0x0  nop
    ctx->pc = 0x1b364cu;
    // NOP
    // 0x1b3650: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1B3650u;
    {
        const bool branch_taken_0x1b3650 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b3650) {
            ctx->pc = 0x1B3674u;
            return;
        }
    }
    ctx->pc = 0x1B3658u;
    // 0x1b3658: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1b3658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1b365c: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1b365cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3660: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1b3660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3664: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1b3664u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b3668: 0x0  nop
    ctx->pc = 0x1b3668u;
    // NOP
    // 0x1b366c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x1B366Cu;
    {
        const bool branch_taken_0x1b366c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b366c) {
            ctx->pc = 0x1B3680u;
            return;
        }
    }
    ctx->pc = 0x1B3674u;
}
