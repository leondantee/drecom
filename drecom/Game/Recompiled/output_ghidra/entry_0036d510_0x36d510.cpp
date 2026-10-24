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

// Function: entry_0036d510
// Address: 0x36d510 - 0x36d62c
void entry_0036d510_0x36d510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d510_0x36d510");
#endif

    switch (ctx->pc) {
        case 0x36d518u: goto label_36d518;
        case 0x36d584u: goto label_36d584;
        case 0x36d5bcu: goto label_36d5bc;
        case 0x36d5f4u: goto label_36d5f4;
        default: break;
    }

    ctx->pc = 0x36d510u;

    // 0x36d510: 0xc06766c  jal         func_19D9B0
    ctx->pc = 0x36D510u;
    SET_GPR_U32(ctx, 31, 0x36D518u);
    ctx->pc = 0x19D9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D9B0u, 0x36D510u, 0x36D518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D518u;
label_36d518:
    // 0x36d518: 0x3c023c75  lui         $v0, 0x3C75
    ctx->pc = 0x36d518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15477 << 16));
    // 0x36d51c: 0x3442c28f  ori         $v0, $v0, 0xC28F
    ctx->pc = 0x36d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
    // 0x36d520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x36d520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d524: 0x0  nop
    ctx->pc = 0x36d524u;
    // NOP
    // 0x36d528: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x36d528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x36d52c: 0x3c023ba3  lui         $v0, 0x3BA3
    ctx->pc = 0x36d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15267 << 16));
    // 0x36d530: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x36d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x36d534: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x36d534u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d538: 0x0  nop
    ctx->pc = 0x36d538u;
    // NOP
    // 0x36d53c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x36d53cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x36d540: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d544: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d548: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x36d548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x36d54c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d550: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d554: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d558: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d558u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d55c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d560: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d564: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d568: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x36d568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x36d56c: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d56cu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d570: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d570u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d574: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d578: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d578u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d57c: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D57Cu;
    SET_GPR_U32(ctx, 31, 0x36D584u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D57Cu, 0x36D584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D584u;
label_36d584:
    // 0x36d584: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d588: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d58c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d590: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d594: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d598: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d59c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d59cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5a0: 0x24050016  addiu       $a1, $zero, 0x16
    ctx->pc = 0x36d5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x36d5a4: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d5a4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d5a8: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d5a8u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d5ac: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d5b0: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d5b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d5b4: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D5B4u;
    SET_GPR_U32(ctx, 31, 0x36D5BCu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D5B4u, 0x36D5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5BCu;
label_36d5bc:
    // 0x36d5bc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5c0: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d5c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5c8: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d5cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5d0: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d5d4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5d8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x36d5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x36d5dc: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d5dcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d5e0: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d5e0u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d5e4: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d5e8: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d5ec: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D5ECu;
    SET_GPR_U32(ctx, 31, 0x36D5F4u);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D5ECu, 0x36D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D5F4u;
label_36d5f4:
    // 0x36d5f4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d5f8: 0x24461338  addiu       $a2, $v0, 0x1338
    ctx->pc = 0x36d5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4920));
    // 0x36d5fc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d600: 0x2443133c  addiu       $v1, $v0, 0x133C
    ctx->pc = 0x36d600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4924));
    // 0x36d604: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d608: 0x24421344  addiu       $v0, $v0, 0x1344
    ctx->pc = 0x36d608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4932));
    // 0x36d60c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36d610: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x36d610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x36d614: 0x94c60000  lhu         $a2, 0x0($a2)
    ctx->pc = 0x36d614u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x36d618: 0x94670000  lhu         $a3, 0x0($v1)
    ctx->pc = 0x36d618u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x36d61c: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x36d61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36d620: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x36d620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x36d624: 0xc06c0ec  jal         func_1B03B0
    ctx->pc = 0x36D624u;
    SET_GPR_U32(ctx, 31, 0x36D62Cu);
    ctx->pc = 0x1B03B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B03B0u, 0x36D624u, 0x36D62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D62Cu;
}
