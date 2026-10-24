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

// Function: Area_Data_Clear
// Address: 0x17d870 - 0x17dc94
void Area_Data_Clear_0x17d870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Area_Data_Clear_0x17d870");
#endif

    switch (ctx->pc) {
        case 0x17d8a4u: goto label_17d8a4;
        case 0x17d8ccu: goto label_17d8cc;
        case 0x17d91cu: goto label_17d91c;
        case 0x17db64u: goto label_17db64;
        case 0x17dbdcu: goto label_17dbdc;
        case 0x17dc34u: goto label_17dc34;
        default: break;
    }

    ctx->pc = 0x17d870u;

    // 0x17d870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d874: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x17d874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x17d878: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17d878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17d87c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x17d87cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x17d880: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17d880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d884: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d88c: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17d88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17d890: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17d890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17d894: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17d894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17d898: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x17d898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d89c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17D89Cu;
    SET_GPR_U32(ctx, 31, 0x17D8A4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17D89Cu, 0x17D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8A4u;
label_17d8a4:
    // 0x17d8a4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d8a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d8ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8b0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17d8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17d8b4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17d8b8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17d8bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8c0: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x17d8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x17d8c4: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17D8C4u;
    SET_GPR_U32(ctx, 31, 0x17D8CCu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17D8C4u, 0x17D8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D8CCu;
label_17d8cc:
    // 0x17d8cc: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x17d8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
    // 0x17d8d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17d8d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d8d4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d8d8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d8dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8e0: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17d8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17d8e4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17d8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17d8e8: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17d8ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d8f0: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x17d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x17d8f4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x17d8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d8f8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x17d8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x17d8fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d900: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x17d900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x17d904: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x17d904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x17d908: 0x24421380  addiu       $v0, $v0, 0x1380
    ctx->pc = 0x17d908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4992));
    // 0x17d90c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17d910: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x17d910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17d914: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x17D914u;
    SET_GPR_U32(ctx, 31, 0x17D91Cu);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x17D914u, 0x17D91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D91Cu;
label_17d91c:
    // 0x17d91c: 0x3c0344e1  lui         $v1, 0x44E1
    ctx->pc = 0x17d91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17633 << 16));
    // 0x17d920: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17d920u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d924: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d928: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d92c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d92cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d930: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d934: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d938: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d93c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d940: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x17d940u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x17d944: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x17d944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x17d948: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d94c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d94cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d950: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d954: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d954u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d958: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d958u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d95c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d960: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d964: 0xa4650156  sh          $a1, 0x156($v1)
    ctx->pc = 0x17d964u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 342), (uint16_t)GPR_U32(ctx, 5));
    // 0x17d968: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17d968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17d96c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d970: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d970u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d974: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d978: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d97c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d980: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d984: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d988: 0xa0650153  sb          $a1, 0x153($v1)
    ctx->pc = 0x17d988u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 339), (uint8_t)GPR_U32(ctx, 5));
    // 0x17d98c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d98cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d990: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d994: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d998: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d99c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d99cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d9a0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d9a4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d9a8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d9ac: 0xe4600168  swc1        $f0, 0x168($v1)
    ctx->pc = 0x17d9acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 360), bits); }
    // 0x17d9b0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d9b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d9b4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d9b8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d9bc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d9c0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d9c4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d9c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d9c8: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d9cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d9d0: 0xe460016c  swc1        $f0, 0x16C($v1)
    ctx->pc = 0x17d9d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 364), bits); }
    // 0x17d9d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d9d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d9d8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17d9dc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17d9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17d9e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d9e4: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17d9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17d9e8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17d9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17d9ec: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17d9ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17d9f0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17d9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17d9f4: 0xe4600170  swc1        $f0, 0x170($v1)
    ctx->pc = 0x17d9f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 368), bits); }
    // 0x17d9f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17d9f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17d9fc: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17d9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da00: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17da00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17da04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da08: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17da08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17da0c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17da0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17da10: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17da10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17da14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da18: 0xe4600174  swc1        $f0, 0x174($v1)
    ctx->pc = 0x17da18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 372), bits); }
    // 0x17da1c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17da1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17da20: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17da20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da24: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17da24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17da28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da2c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17da2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17da30: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17da30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17da34: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17da34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17da38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da3c: 0xe4600178  swc1        $f0, 0x178($v1)
    ctx->pc = 0x17da3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 376), bits); }
    // 0x17da40: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17da40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da44: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17da44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17da48: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da4c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17da4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17da50: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17da50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17da54: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17da54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17da58: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da5c: 0xac600158  sw          $zero, 0x158($v1)
    ctx->pc = 0x17da5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 344), GPR_U32(ctx, 0));
    // 0x17da60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17da60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da64: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17da64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17da68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da6c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17da6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17da70: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17da70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17da74: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17da74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17da78: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da7c: 0xac60015c  sw          $zero, 0x15C($v1)
    ctx->pc = 0x17da7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 0));
    // 0x17da80: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x17da80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x17da84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17da84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17da88: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17da88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17da8c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17da8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17da90: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17da90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17da94: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17da94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17da98: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17da98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17da9c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17da9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17daa0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17daa4: 0xe460017c  swc1        $f0, 0x17C($v1)
    ctx->pc = 0x17daa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 380), bits); }
    // 0x17daa8: 0x3c03425c  lui         $v1, 0x425C
    ctx->pc = 0x17daa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16988 << 16));
    // 0x17daac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17daacu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dab0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dab4: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17dab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17dab8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dabc: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dabcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dac0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dac4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17dac8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dacc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x17daccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x17dad0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17dad0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dad4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dad8: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17dad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17dadc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dadcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dae0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dae0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dae4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dae8: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17daec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17daecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17daf0: 0xe4600184  swc1        $f0, 0x184($v1)
    ctx->pc = 0x17daf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 388), bits); }
    // 0x17daf4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17daf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17daf8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17daf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dafc: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17dafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db04: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db04u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17db08: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17db08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17db0c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17db0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17db10: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db14: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x17db14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x17db18: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db1c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db20: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db24: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17db28: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17db28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17db2c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17db2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17db30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db34: 0xa0600152  sb          $zero, 0x152($v1)
    ctx->pc = 0x17db34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 338), (uint8_t)GPR_U32(ctx, 0));
    // 0x17db38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db3c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db44: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17db48: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17db48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17db4c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17db4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17db50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db54: 0xac600160  sw          $zero, 0x160($v1)
    ctx->pc = 0x17db54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 352), GPR_U32(ctx, 0));
    // 0x17db58: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17db58u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17db5c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17DB5Cu;
    {
        const bool branch_taken_0x17db5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17db5c) {
            ctx->pc = 0x17DBC0u;
            goto label_17dbc0;
        }
    }
    ctx->pc = 0x17DB64u;
label_17db64:
    // 0x17db64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17db64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17db68: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db6c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db70: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db74: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17db78: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17db78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17db7c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17db7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17db80: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17db80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db84: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17db84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17db88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db8c: 0xa06500d0  sb          $a1, 0xD0($v1)
    ctx->pc = 0x17db8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 208), (uint8_t)GPR_U32(ctx, 5));
    // 0x17db90: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17db90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17db94: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17db94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17db98: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17db9c: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17db9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dba0: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dba4: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17dba8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbac: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dbb0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbb4: 0xa06001a0  sb          $zero, 0x1A0($v1)
    ctx->pc = 0x17dbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 416), (uint8_t)GPR_U32(ctx, 0));
    // 0x17dbb8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dbbc: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dbbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_17dbc0:
    // 0x17dbc0: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dbc4: 0x28630080  slti        $v1, $v1, 0x80
    ctx->pc = 0x17dbc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x17dbc8: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x17DBC8u;
    {
        const bool branch_taken_0x17dbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dbc8) {
            ctx->pc = 0x17DB64u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17db64;
        }
    }
    ctx->pc = 0x17DBD0u;
    // 0x17dbd0: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17dbd0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17dbd4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DBD4u;
    {
        const bool branch_taken_0x17dbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dbd4) {
            ctx->pc = 0x17DC18u;
            goto label_17dc18;
        }
    }
    ctx->pc = 0x17DBDCu;
label_17dbdc:
    // 0x17dbdc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17dbdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17dbe0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dbe4: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x17dbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x17dbe8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbec: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dbecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dbf0: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17dbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17dbf4: 0x24630380  addiu       $v1, $v1, 0x380
    ctx->pc = 0x17dbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 896));
    // 0x17dbf8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dbfc: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dbfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc00: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17dc04: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc08: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x17dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x17dc0c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dc10: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dc10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17dc14: 0x0  nop
    ctx->pc = 0x17dc14u;
    // NOP
label_17dc18:
    // 0x17dc18: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc1c: 0x28630108  slti        $v1, $v1, 0x108
    ctx->pc = 0x17dc1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)264) ? 1 : 0);
    // 0x17dc20: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17DC20u;
    {
        const bool branch_taken_0x17dc20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc20) {
            ctx->pc = 0x17DBDCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dbdc;
        }
    }
    ctx->pc = 0x17DC28u;
    // 0x17dc28: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x17dc28u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x17dc2c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17DC2Cu;
    {
        const bool branch_taken_0x17dc2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dc2c) {
            ctx->pc = 0x17DC70u;
            goto label_17dc70;
        }
    }
    ctx->pc = 0x17DC34u;
label_17dc34:
    // 0x17dc34: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x17dc34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17dc38: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x17dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17dc3c: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x17dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x17dc40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc44: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x17dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x17dc48: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x17dc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x17dc4c: 0x24631380  addiu       $v1, $v1, 0x1380
    ctx->pc = 0x17dc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4992));
    // 0x17dc50: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17dc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc54: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc58: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x17dc58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x17dc5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x17dc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x17dc60: 0xa4650190  sh          $a1, 0x190($v1)
    ctx->pc = 0x17dc60u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 400), (uint16_t)GPR_U32(ctx, 5));
    // 0x17dc64: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17dc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17dc68: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x17dc68u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x17dc6c: 0x0  nop
    ctx->pc = 0x17dc6cu;
    // NOP
label_17dc70:
    // 0x17dc70: 0x3203ffff  andi        $v1, $s0, 0xFFFF
    ctx->pc = 0x17dc70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x17dc74: 0x28630008  slti        $v1, $v1, 0x8
    ctx->pc = 0x17dc74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x17dc78: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x17DC78u;
    {
        const bool branch_taken_0x17dc78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dc78) {
            ctx->pc = 0x17DC34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17dc34;
        }
    }
    ctx->pc = 0x17DC80u;
    // 0x17dc80: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x17dc80u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17dc84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17dc84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17dc88: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17dc88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17dc8c: 0x3e00008  jr          $ra
    ctx->pc = 0x17DC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DC8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DC94u;
}
