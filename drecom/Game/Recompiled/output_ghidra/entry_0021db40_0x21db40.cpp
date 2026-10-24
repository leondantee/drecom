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

// Function: entry_0021db40
// Address: 0x21db40 - 0x21dbcc
void entry_0021db40_0x21db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021db40_0x21db40");
#endif

    switch (ctx->pc) {
        case 0x21db48u: goto label_21db48;
        case 0x21db74u: goto label_21db74;
        case 0x21dba0u: goto label_21dba0;
        default: break;
    }

    ctx->pc = 0x21db40u;

    // 0x21db40: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB40u;
    SET_GPR_U32(ctx, 31, 0x21DB48u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB40u, 0x21DB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB48u;
label_21db48:
    // 0x21db48: 0x3c024103  lui         $v0, 0x4103
    ctx->pc = 0x21db48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16643 << 16));
    // 0x21db4c: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21db4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21db50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21db50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21db54: 0x0  nop
    ctx->pc = 0x21db54u;
    // NOP
    // 0x21db58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21db58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21db5c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db60: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x21db60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db64: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21db64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21db68: 0xe4400050  swc1        $f0, 0x50($v0)
    ctx->pc = 0x21db68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x21db6c: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB6Cu;
    SET_GPR_U32(ctx, 31, 0x21DB74u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB6Cu, 0x21DB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DB74u;
label_21db74:
    // 0x21db74: 0x3c0240f3  lui         $v0, 0x40F3
    ctx->pc = 0x21db74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16627 << 16));
    // 0x21db78: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x21db78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x21db7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21db7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21db80: 0x0  nop
    ctx->pc = 0x21db80u;
    // NOP
    // 0x21db84: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21db84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21db88: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x21db88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21db8c: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x21db8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21db90: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21db90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21db94: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x21db94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x21db98: 0xc06765c  jal         func_19D970
    ctx->pc = 0x21DB98u;
    SET_GPR_U32(ctx, 31, 0x21DBA0u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x21DB98u, 0x21DBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21DBA0u;
label_21dba0:
    // 0x21dba0: 0x3c034103  lui         $v1, 0x4103
    ctx->pc = 0x21dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16643 << 16));
    // 0x21dba4: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x21dba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x21dba8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x21dba8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21dbac: 0x0  nop
    ctx->pc = 0x21dbacu;
    // NOP
    // 0x21dbb0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21dbb0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21dbb4: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x21dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x21dbb8: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x21dbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21dbbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x21dbbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21dbc0: 0xe4600058  swc1        $f0, 0x58($v1)
    ctx->pc = 0x21dbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x21dbc4: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x21DBC4u;
    {
        const bool branch_taken_0x21dbc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21dbc4) {
            ctx->pc = 0x21DD28u;
            return;
        }
    }
    ctx->pc = 0x21DBCCu;
}
