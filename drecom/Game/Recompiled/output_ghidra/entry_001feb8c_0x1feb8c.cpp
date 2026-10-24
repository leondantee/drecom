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

// Function: entry_001feb8c
// Address: 0x1feb8c - 0x1fec28
void entry_001feb8c_0x1feb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001feb8c_0x1feb8c");
#endif

    switch (ctx->pc) {
        case 0x1feb9cu: goto label_1feb9c;
        case 0x1febccu: goto label_1febcc;
        case 0x1febfcu: goto label_1febfc;
        default: break;
    }

    ctx->pc = 0x1feb8cu;

    // 0x1feb8c: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1FEB8Cu;
    {
        const bool branch_taken_0x1feb8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1feb8c) {
            ctx->pc = 0x1FEC28u;
            return;
        }
    }
    ctx->pc = 0x1FEB94u;
    // 0x1feb94: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEB94u;
    SET_GPR_U32(ctx, 31, 0x1FEB9Cu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEB94u, 0x1FEB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEB9Cu;
label_1feb9c:
    // 0x1feb9c: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1feba0: 0xc4410270  lwc1        $f1, 0x270($v0)
    ctx->pc = 0x1feba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1feba4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1feba4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1feba8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1feba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febac: 0xc4400280  lwc1        $f0, 0x280($v0)
    ctx->pc = 0x1febacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1febb0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1febb0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1febb4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1febb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1febb8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1febbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febc0: 0xe4400140  swc1        $f0, 0x140($v0)
    ctx->pc = 0x1febc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 320), bits); }
    // 0x1febc4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEBC4u;
    SET_GPR_U32(ctx, 31, 0x1FEBCCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEBC4u, 0x1FEBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBCCu;
label_1febcc:
    // 0x1febcc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febd0: 0xc4410274  lwc1        $f1, 0x274($v0)
    ctx->pc = 0x1febd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1febd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1febd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1febd8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febdc: 0xc4400284  lwc1        $f0, 0x284($v0)
    ctx->pc = 0x1febdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1febe0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1febe0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1febe4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1febe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1febe8: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1febec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1febecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1febf0: 0xe4400144  swc1        $f0, 0x144($v0)
    ctx->pc = 0x1febf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 324), bits); }
    // 0x1febf4: 0xc067648  jal         func_19D920
    ctx->pc = 0x1FEBF4u;
    SET_GPR_U32(ctx, 31, 0x1FEBFCu);
    ctx->pc = 0x19D920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D920u, 0x1FEBF4u, 0x1FEBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FEBFCu;
label_1febfc:
    // 0x1febfc: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1febfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec00: 0xc4410278  lwc1        $f1, 0x278($v0)
    ctx->pc = 0x1fec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1fec04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1fec04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fec08: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec0c: 0xc4400288  lwc1        $f0, 0x288($v0)
    ctx->pc = 0x1fec0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1fec10: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1fec10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1fec14: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x1fec14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1fec18: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x1fec18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fec1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fec1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fec20: 0xe4400148  swc1        $f0, 0x148($v0)
    ctx->pc = 0x1fec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 328), bits); }
    // 0x1fec24: 0x0  nop
    ctx->pc = 0x1fec24u;
    // NOP
    ctx->pc = 0x1fec28u;
}
