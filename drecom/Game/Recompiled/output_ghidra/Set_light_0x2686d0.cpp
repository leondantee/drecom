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

// Function: Set_light
// Address: 0x2686d0 - 0x268880
void Set_light_0x2686d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Set_light_0x2686d0");
#endif

    switch (ctx->pc) {
        case 0x2686f0u: goto label_2686f0;
        case 0x26870cu: goto label_26870c;
        case 0x268728u: goto label_268728;
        case 0x268848u: goto label_268848;
        case 0x26885cu: goto label_26885c;
        case 0x268870u: goto label_268870;
        default: break;
    }

    ctx->pc = 0x2686d0u;

    // 0x2686d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2686d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2686d4: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x2686d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
    // 0x2686d8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2686d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2686dc: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x2686dcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x2686e0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x2686e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x2686e4: 0x2445fd10  addiu       $a1, $v0, -0x2F0
    ctx->pc = 0x2686e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
    // 0x2686e8: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x2686E8u;
    SET_GPR_U32(ctx, 31, 0x2686F0u);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x2686E8u, 0x2686F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2686F0u;
label_2686f0:
    // 0x2686f0: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x2686f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x2686f4: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x2686f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x2686f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2686f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2686fc: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2686fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x268700: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x268700u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268704: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x268704u;
    SET_GPR_U32(ctx, 31, 0x26870Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x268704u, 0x26870Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26870Cu;
label_26870c:
    // 0x26870c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x26870cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x268710: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x268710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x268714: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x268714u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268718: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x268718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26871c: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x26871cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268720: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x268720u;
    SET_GPR_U32(ctx, 31, 0x268728u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x268720u, 0x268728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268728u;
label_268728:
    // 0x268728: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x268728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x26872c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26872cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268730: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x268730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x268734: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x268734u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268738: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x268738u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26873c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26873cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268740: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268744: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x268744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x268748: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x268748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x26874c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26874cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268750: 0xe4400070  swc1        $f0, 0x70($v0)
    ctx->pc = 0x268750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x268754: 0x3c0242c0  lui         $v0, 0x42C0
    ctx->pc = 0x268754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17088 << 16));
    // 0x268758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26875c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26875cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x268760: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x268760u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268764: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x268764u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x268768: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26876c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x26876cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x268770: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x268770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x268774: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x268774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x268778: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26877c: 0xe4400074  swc1        $f0, 0x74($v0)
    ctx->pc = 0x26877cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x268780: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x268780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x268784: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268784u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268788: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x268788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26878c: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x26878cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268790: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x268790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x268794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268798: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26879c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26879cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2687a0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2687a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2687a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2687a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2687a8: 0xe4400078  swc1        $f0, 0x78($v0)
    ctx->pc = 0x2687a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x2687ac: 0x3c023e70  lui         $v0, 0x3E70
    ctx->pc = 0x2687acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15984 << 16));
    // 0x2687b0: 0x3442f0f1  ori         $v0, $v0, 0xF0F1
    ctx->pc = 0x2687b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61681);
    // 0x2687b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2687b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2687b8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2687b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2687bc: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x2687bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x2687c0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2687c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2687c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2687c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2687c8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2687c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2687cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2687ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2687d0: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x2687d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x2687d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2687d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2687d8: 0xe4400080  swc1        $f0, 0x80($v0)
    ctx->pc = 0x2687d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 128), bits); }
    // 0x2687dc: 0x3c023e70  lui         $v0, 0x3E70
    ctx->pc = 0x2687dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15984 << 16));
    // 0x2687e0: 0x3442f0f1  ori         $v0, $v0, 0xF0F1
    ctx->pc = 0x2687e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61681);
    // 0x2687e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2687e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2687e8: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x2687e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x2687ec: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x2687ecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x2687f0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2687f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2687f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2687f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2687f8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x2687f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2687fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2687fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x268800: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x268800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x268804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268808: 0xe4400084  swc1        $f0, 0x84($v0)
    ctx->pc = 0x268808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 132), bits); }
    // 0x26880c: 0x3c023ec8  lui         $v0, 0x3EC8
    ctx->pc = 0x26880cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16072 << 16));
    // 0x268810: 0x3442c8c9  ori         $v0, $v0, 0xC8C9
    ctx->pc = 0x268810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51401);
    // 0x268814: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x268814u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x268818: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x268818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x26881c: 0x8c23fce0  lw          $v1, -0x320($at)
    ctx->pc = 0x26881cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268820: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x268820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x268824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268828: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x268828u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x26882c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x268830: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x268830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x268834: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x268834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x268838: 0xe4400088  swc1        $f0, 0x88($v0)
    ctx->pc = 0x268838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 136), bits); }
    // 0x26883c: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x26883cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x268840: 0xc084964  jal         func_212590
    ctx->pc = 0x268840u;
    SET_GPR_U32(ctx, 31, 0x268848u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x268840u, 0x268848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268848u;
label_268848:
    // 0x268848: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x268848u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26884c: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x26884cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x268850: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x268850u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268854: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x268854u;
    SET_GPR_U32(ctx, 31, 0x26885Cu);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x268854u, 0x26885Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26885Cu;
label_26885c:
    // 0x26885c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26885cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x268860: 0x3c010062  lui         $at, 0x62
    ctx->pc = 0x268860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)98 << 16));
    // 0x268864: 0x8c24fce0  lw          $a0, -0x320($at)
    ctx->pc = 0x268864u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61FCE0u));
    // 0x268868: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x268868u;
    SET_GPR_U32(ctx, 31, 0x268870u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x268868u, 0x268870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x268870u;
label_268870:
    // 0x268870: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x268870u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x268874: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x268874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x268878: 0x3e00008  jr          $ra
    ctx->pc = 0x268878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x268878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x268880u;
}
