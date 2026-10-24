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

// Function: entry_001714ac
// Address: 0x1714ac - 0x171660
void entry_001714ac_0x1714ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001714ac_0x1714ac");
#endif

    switch (ctx->pc) {
        case 0x171590u: goto label_171590;
        default: break;
    }

    ctx->pc = 0x1714acu;

    // 0x1714ac: 0x8fa2016c  lw          $v0, 0x16C($sp)
    ctx->pc = 0x1714acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
    // 0x1714b0: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1714b0u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1714b4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1714b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1714b8: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x1714b8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x1714bc: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1714bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1714c0: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1714c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x1714c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1714c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1714c8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1714c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1714cc: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x1714ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x1714d0: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x1714d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1714d4: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1714d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1714d8: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1714d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1714dc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1714dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1714e0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1714e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1714e4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1714e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1714e8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x1714e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x1714ec: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1714ecu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1714f0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1714f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1714f4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1714f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x1714f8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x1714f8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x1714fc: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1714fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x171500: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x171500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x171504: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x171504u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x171508: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x171508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x17150c: 0x2462bd00  addiu       $v0, $v1, -0x4300
    ctx->pc = 0x17150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x171510: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x171510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x171514: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171518: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171518u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17151c: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x17151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171520: 0x24620070  addiu       $v0, $v1, 0x70
    ctx->pc = 0x171520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x171524: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x171524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x171528: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171528u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x17152c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x17152cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x171530: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x171530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x171534: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x171534u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x171538: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x171538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x17153c: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x17153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171540: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171544: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x171544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x171548: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171548u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17154c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171550: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x171550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171554: 0x24430020  addiu       $v1, $v0, 0x20
    ctx->pc = 0x171554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x171558: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x171558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x17155c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17155cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x171560: 0x2442c930  addiu       $v0, $v0, -0x36D0
    ctx->pc = 0x171560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953264));
    // 0x171564: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171564u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47C930u));
    // 0x171568: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x171568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17156c: 0x24430070  addiu       $v1, $v0, 0x70
    ctx->pc = 0x17156cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171570: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x171570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171574: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171574u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x171578: 0x8fa30154  lw          $v1, 0x154($sp)
    ctx->pc = 0x171578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17157c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17157cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171580: 0x24640070  addiu       $a0, $v1, 0x70
    ctx->pc = 0x171580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x171584: 0x24450070  addiu       $a1, $v0, 0x70
    ctx->pc = 0x171584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x171588: 0xc05da30  jal         func_1768C0
    ctx->pc = 0x171588u;
    SET_GPR_U32(ctx, 31, 0x171590u);
    ctx->pc = 0x1768C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1768C0u, 0x171588u, 0x171590u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171590u;
label_171590:
    // 0x171590: 0x142040  sll         $a0, $s4, 1
    ctx->pc = 0x171590u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x171594: 0x942821  addu        $a1, $a0, $s4
    ctx->pc = 0x171594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x171598: 0x53100  sll         $a2, $a1, 4
    ctx->pc = 0x171598u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x17159c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x17159cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1715a0: 0x2443bd00  addiu       $v1, $v0, -0x4300
    ctx->pc = 0x1715a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x1715a4: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x1715a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1715a8: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1715a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1715ac: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1715acu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1715b0: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x1715b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1715b4: 0x24440030  addiu       $a0, $v0, 0x30
    ctx->pc = 0x1715b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1715b8: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x1715b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x1715bc: 0x112840  sll         $a1, $s1, 1
    ctx->pc = 0x1715bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1715c0: 0xb13021  addu        $a2, $a1, $s1
    ctx->pc = 0x1715c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1715c4: 0x61100  sll         $v0, $a2, 4
    ctx->pc = 0x1715c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x1715c8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1715c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1715cc: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1715ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1715d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1715d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1715d4: 0x24620080  addiu       $v0, $v1, 0x80
    ctx->pc = 0x1715d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x1715d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1715d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1715dc: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x1715dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x1715e0: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x1715e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1715e4: 0x24a60010  addiu       $a2, $a1, 0x10
    ctx->pc = 0x1715e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x1715e8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x1715e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x1715ec: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x1715ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x1715f0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1715f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1715f4: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1715f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1715f8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1715f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1715fc: 0x2442bd00  addiu       $v0, $v0, -0x4300
    ctx->pc = 0x1715fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950144));
    // 0x171600: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x171600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x171604: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x171604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x171608: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x171608u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17160c: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x17160cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x171610: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x171610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171614: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x171614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x171618: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x171618u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x17161c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x17161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x171620: 0x2462bd50  addiu       $v0, $v1, -0x42B0
    ctx->pc = 0x171620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950224));
    // 0x171624: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x171624u;
    SET_GPR_VEC(ctx, 4, FAST_READ128(0x47BD50u));
    // 0x171628: 0x8fa20154  lw          $v0, 0x154($sp)
    ctx->pc = 0x171628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x17162c: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x17162cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x171630: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x171630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x171634: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x171634u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x171638: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x171638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
    // 0x17163c: 0x90420013  lbu         $v0, 0x13($v0)
    ctx->pc = 0x17163cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 19)));
    // 0x171640: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x171640u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x171644: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x171644u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x171648: 0x0  nop
    ctx->pc = 0x171648u;
    // NOP
    // 0x17164c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x17164cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
    // 0x171650: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x171650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x171654: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x171654u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x171658: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x171658u;
    {
        const bool branch_taken_0x171658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x171658) {
            ctx->pc = 0x171730u;
            return;
        }
    }
    ctx->pc = 0x171660u;
}
