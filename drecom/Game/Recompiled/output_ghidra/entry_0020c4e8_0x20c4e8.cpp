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

// Function: entry_0020c4e8
// Address: 0x20c4e8 - 0x20c5f0
void entry_0020c4e8_0x20c4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c4e8_0x20c4e8");
#endif

    switch (ctx->pc) {
        case 0x20c510u: goto label_20c510;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c560u: goto label_20c560;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c590u: goto label_20c590;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5e8u: goto label_20c5e8;
        default: break;
    }

    ctx->pc = 0x20c4e8u;

    // 0x20c4e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c4ec: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c4f0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x20c4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
    // 0x20c4f4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20c4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x20c4f8: 0x248412a0  addiu       $a0, $a0, 0x12A0
    ctx->pc = 0x20c4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4768));
    // 0x20c4fc: 0x260512a0  addiu       $a1, $s0, 0x12A0
    ctx->pc = 0x20c4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4768));
    // 0x20c500: 0x246612b0  addiu       $a2, $v1, 0x12B0
    ctx->pc = 0x20c500u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4784));
    // 0x20c504: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c508: 0xc05ce04  jal         func_173810
    ctx->pc = 0x20C508u;
    SET_GPR_U32(ctx, 31, 0x20C510u);
    ctx->pc = 0x173810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173810u, 0x20C508u, 0x20C510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C510u;
label_20c510:
    // 0x20c510: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c514: 0xe4401290  swc1        $f0, 0x1290($v0)
    ctx->pc = 0x20c514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4752), bits); }
    // 0x20c518: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
    // 0x20c51c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20c51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
    // 0x20c520: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x20c520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x20c524: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c528: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c52c: 0xc46c1290  lwc1        $f12, 0x1290($v1)
    ctx->pc = 0x20c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c530: 0xc44d00d4  lwc1        $f13, 0xD4($v0)
    ctx->pc = 0x20c530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20c534: 0xc058f50  jal         func_163D40
    ctx->pc = 0x20C534u;
    SET_GPR_U32(ctx, 31, 0x20C53Cu);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x20C534u, 0x20C53Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c540: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x20c540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x20c544: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c548: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c54c: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c550: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20c550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20c554: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c554u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c558: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C558u;
    SET_GPR_U32(ctx, 31, 0x20C560u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C558u, 0x20C560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C560u;
label_20c560:
    // 0x20c560: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c564: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c568: 0x24640120  addiu       $a0, $v1, 0x120
    ctx->pc = 0x20c568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 288));
    // 0x20c56c: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c570: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c570u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c574: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C574u;
    SET_GPR_U32(ctx, 31, 0x20C57Cu);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C574u, 0x20C57Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C57Cu;
label_20c57c:
    // 0x20c57c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c580: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c584: 0xc44c1290  lwc1        $f12, 0x1290($v0)
    ctx->pc = 0x20c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20c588: 0xc05cd58  jal         func_173560
    ctx->pc = 0x20C588u;
    SET_GPR_U32(ctx, 31, 0x20C590u);
    ctx->pc = 0x173560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173560u, 0x20C588u, 0x20C590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c594: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20c594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c598: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c59c: 0xc040c9e  jal         func_103278
    ctx->pc = 0x20C59Cu;
    SET_GPR_U32(ctx, 31, 0x20C5A4u);
    ctx->pc = 0x103278u;
    {
        ctx->pc = 0x20C5A4u;
        ps2_stubs::sceVu0CopyVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x20C5A4u) { return; }
    ctx->pc = 0x20C5A4u;
label_20c5a4:
    // 0x20c5a4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x20c5a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20c5ac: 0xc080f60  jal         func_203D80
    ctx->pc = 0x20C5ACu;
    SET_GPR_U32(ctx, 31, 0x20C5B4u);
    ctx->pc = 0x203D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x203D80u, 0x20C5ACu, 0x20C5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5B4u;
label_20c5b4:
    // 0x20c5b4: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x20c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5bc: 0x24450120  addiu       $a1, $v0, 0x120
    ctx->pc = 0x20c5bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x20c5c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5c4: 0xc0675b0  jal         func_19D6C0
    ctx->pc = 0x20C5C4u;
    SET_GPR_U32(ctx, 31, 0x20C5CCu);
    ctx->pc = 0x19D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6C0u, 0x20C5C4u, 0x20C5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5CCu;
label_20c5cc:
    // 0x20c5cc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x20c5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5d0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c5d4: 0x246412a0  addiu       $a0, $v1, 0x12A0
    ctx->pc = 0x20c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4768));
    // 0x20c5d8: 0x244512a0  addiu       $a1, $v0, 0x12A0
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4768));
    // 0x20c5dc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20c5e0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x20C5E0u;
    SET_GPR_U32(ctx, 31, 0x20C5E8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x20C5E0u, 0x20C5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C5E8u;
label_20c5e8:
    // 0x20c5e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x20C5E8u;
    {
        const bool branch_taken_0x20c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5e8) {
            ctx->pc = 0x20C60Cu;
            return;
        }
    }
    ctx->pc = 0x20C5F0u;
}
