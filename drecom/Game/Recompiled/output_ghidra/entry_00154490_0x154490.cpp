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

// Function: entry_00154490
// Address: 0x154490 - 0x1547b0
void entry_00154490_0x154490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154490_0x154490");
#endif

    switch (ctx->pc) {
        case 0x1544a4u: goto label_1544a4;
        case 0x1544b4u: goto label_1544b4;
        case 0x1544d8u: goto label_1544d8;
        case 0x1544ecu: goto label_1544ec;
        case 0x1544fcu: goto label_1544fc;
        case 0x154520u: goto label_154520;
        default: break;
    }

    ctx->pc = 0x154490u;

    // 0x154490: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154490u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154494: 0x8e0515c0  lw          $a1, 0x15C0($s0)
    ctx->pc = 0x154494u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5568)));
    // 0x154498: 0x260615d0  addiu       $a2, $s0, 0x15D0
    ctx->pc = 0x154498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 5584));
    // 0x15449c: 0xc05db20  jal         func_176C80
    ctx->pc = 0x15449Cu;
    SET_GPR_U32(ctx, 31, 0x1544A4u);
    ctx->pc = 0x176C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176C80u, 0x15449Cu, 0x1544A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544A4u;
label_1544a4:
    // 0x1544a4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1544a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1544a8: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x1544a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1544ac: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x1544ACu;
    SET_GPR_U32(ctx, 31, 0x1544B4u);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x1544ACu, 0x1544B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544B4u;
label_1544b4:
    // 0x1544b4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1544b4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1544b8: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x1544b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1544bc: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x1544bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x1544c0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1544c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1544c4: 0x0  nop
    ctx->pc = 0x1544c4u;
    // NOP
    // 0x1544c8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x1544c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1544cc: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1544ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1544d0: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x1544D0u;
    SET_GPR_U32(ctx, 31, 0x1544D8u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x1544D0u, 0x1544D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544D8u;
label_1544d8:
    // 0x1544d8: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x1544d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x1544dc: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1544dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1544e0: 0x246500f0  addiu       $a1, $v1, 0xF0
    ctx->pc = 0x1544e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 240));
    // 0x1544e4: 0xc05dafc  jal         func_176BF0
    ctx->pc = 0x1544E4u;
    SET_GPR_U32(ctx, 31, 0x1544ECu);
    ctx->pc = 0x176BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176BF0u, 0x1544E4u, 0x1544ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544ECu;
label_1544ec:
    // 0x1544ec: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1544ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1544f0: 0xc60c15b8  lwc1        $f12, 0x15B8($s0)
    ctx->pc = 0x1544f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1544f4: 0xc05db4c  jal         func_176D30
    ctx->pc = 0x1544F4u;
    SET_GPR_U32(ctx, 31, 0x1544FCu);
    ctx->pc = 0x176D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176D30u, 0x1544F4u, 0x1544FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1544FCu;
label_1544fc:
    // 0x1544fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x1544fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x154500: 0xc60115b8  lwc1        $f1, 0x15B8($s0)
    ctx->pc = 0x154500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x154504: 0x3c0345fa  lui         $v1, 0x45FA
    ctx->pc = 0x154504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17914 << 16));
    // 0x154508: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x154508u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15450c: 0x0  nop
    ctx->pc = 0x15450cu;
    // NOP
    // 0x154510: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x154510u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x154514: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154518: 0xc05db74  jal         func_176DD0
    ctx->pc = 0x154518u;
    SET_GPR_U32(ctx, 31, 0x154520u);
    ctx->pc = 0x176DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176DD0u, 0x154518u, 0x154520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154520u;
label_154520:
    // 0x154520: 0x860515bc  lh          $a1, 0x15BC($s0)
    ctx->pc = 0x154520u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
    // 0x154524: 0x10a000a2  beqz        $a1, . + 4 + (0xA2 << 2)
    ctx->pc = 0x154524u;
    {
        const bool branch_taken_0x154524 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x154524) {
            ctx->pc = 0x1547B0u;
            return;
        }
    }
    ctx->pc = 0x15452Cu;
    // 0x15452c: 0x860315bc  lh          $v1, 0x15BC($s0)
    ctx->pc = 0x15452cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5564)));
    // 0x154530: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154534: 0xa60315bc  sh          $v1, 0x15BC($s0)
    ctx->pc = 0x154534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 5564), (uint16_t)GPR_U32(ctx, 3));
    // 0x154538: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15453c: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x15453cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154540: 0xa43021  addu        $a2, $a1, $a0
    ctx->pc = 0x154540u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154544: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x154544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x154548: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x15454c: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x15454cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154550: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x154550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154554: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x154558: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x15455c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15455cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154560: 0xc4a00070  lwc1        $f0, 0x70($a1)
    ctx->pc = 0x154560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154568: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x154568u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x15456c: 0x8e0615b0  lw          $a2, 0x15B0($s0)
    ctx->pc = 0x15456cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154570: 0x62040  sll         $a0, $a2, 1
    ctx->pc = 0x154570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x154574: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x154574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x154578: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154578u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x15457c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15457cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154580: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x154580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154584: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x154584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x154588: 0x3c063f4c  lui         $a2, 0x3F4C
    ctx->pc = 0x154588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16204 << 16));
    // 0x15458c: 0x34c4cccd  ori         $a0, $a2, 0xCCCD
    ctx->pc = 0x15458cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x154590: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154590u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154594: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x154594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154598: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15459c: 0xe4600074  swc1        $f0, 0x74($v1)
    ctx->pc = 0x15459cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 116), bits); }
    // 0x1545a0: 0x8e0315b0  lw          $v1, 0x15B0($s0)
    ctx->pc = 0x1545a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1545a4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1545a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1545a8: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1545a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1545ac: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1545acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1545b0: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1545b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1545b4: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1545b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1545b8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1545b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1545bc: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1545bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1545c0: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x1545c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1545c4: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x1545c4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1545c8: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x1545c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1545cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1545ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1545d0: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x1545d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x1545d4: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x1545d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x1545d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1545d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1545dc: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1545dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1545e0: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x1545e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1545e4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1545e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1545e8: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x1545e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x1545ec: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x1545ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1545f0: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x1545f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x1545f4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x1545f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1545f8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x1545f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1545fc: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x1545fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154600: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154600u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154604: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x154604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x154608: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x154608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x15460c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x15460cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154610: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154614: 0x52100  sll         $a0, $a1, 4
    ctx->pc = 0x154614u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154618: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154618u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x15461c: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x15461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154620: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154624: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x154628: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154628u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x15462c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x15462cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154630: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x154630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154634: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154634u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154638: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x154638u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x15463c: 0x8e0415b0  lw          $a0, 0x15B0($s0)
    ctx->pc = 0x15463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5552)));
    // 0x154640: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x154640u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154644: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x154644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x154648: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x154648u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15464c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x15464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154650: 0x2463bd00  addiu       $v1, $v1, -0x4300
    ctx->pc = 0x154650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154654: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x154654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154658: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x15465c: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x15465cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x154660: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154660u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154664: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x154664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154668: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154668u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15466c: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x15466cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x154670: 0x8e0515b4  lw          $a1, 0x15B4($s0)
    ctx->pc = 0x154670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154674: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x154674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x154678: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15467c: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x15467cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154680: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x154680u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x154684: 0x2464bd00  addiu       $a0, $v1, -0x4300
    ctx->pc = 0x154684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950144));
    // 0x154688: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x154688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x15468c: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x15468cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154690: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x154690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154694: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154694u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154698: 0xc4600070  lwc1        $f0, 0x70($v1)
    ctx->pc = 0x154698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15469c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15469cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1546a0: 0xe4600070  swc1        $f0, 0x70($v1)
    ctx->pc = 0x1546a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 112), bits); }
    // 0x1546a4: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x1546a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1546a8: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1546a8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1546ac: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x1546acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1546b0: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x1546b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1546b4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x1546b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x1546b8: 0x24a3bd00  addiu       $v1, $a1, -0x4300
    ctx->pc = 0x1546b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x1546bc: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1546bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1546c0: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x1546c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x1546c4: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x1546c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1546c8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1546c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1546cc: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x1546ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1546d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1546d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1546d4: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1546d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1546d8: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x1546d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x1546dc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1546dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1546e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1546e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1546e4: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x1546e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1546e8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x1546e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x1546ec: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x1546ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x1546f0: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x1546f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1546f4: 0x3c053f4c  lui         $a1, 0x3F4C
    ctx->pc = 0x1546f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16204 << 16));
    // 0x1546f8: 0x34a3cccd  ori         $v1, $a1, 0xCCCD
    ctx->pc = 0x1546f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52429);
    // 0x1546fc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1546fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154700: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x154700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154704: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154708: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x154708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x15470c: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x15470cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154710: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154710u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154714: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154718: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x154718u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15471c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x15471cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154720: 0x2483bd00  addiu       $v1, $a0, -0x4300
    ctx->pc = 0x154720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x154724: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x154724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x154728: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154728u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x15472c: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x15472cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x154730: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x154730u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154734: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x154734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x154738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x154738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x15473c: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x15473cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x154740: 0x8e0415b4  lw          $a0, 0x15B4($s0)
    ctx->pc = 0x154740u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154744: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x154744u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x154748: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15474c: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x15474cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x154750: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x154750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x154754: 0x24a6bd00  addiu       $a2, $a1, -0x4300
    ctx->pc = 0x154754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950144));
    // 0x154758: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15475c: 0x3c043f4c  lui         $a0, 0x3F4C
    ctx->pc = 0x15475cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16204 << 16));
    // 0x154760: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x154760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
    // 0x154764: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154764u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x154768: 0xc4600084  lwc1        $f0, 0x84($v1)
    ctx->pc = 0x154768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15476c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x15476cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x154770: 0xe4600084  swc1        $f0, 0x84($v1)
    ctx->pc = 0x154770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 132), bits); }
    // 0x154774: 0x8e0315b4  lw          $v1, 0x15B4($s0)
    ctx->pc = 0x154774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5556)));
    // 0x154778: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x154778u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x15477c: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x154780: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x154780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x154784: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x154784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x154788: 0x2485bd00  addiu       $a1, $a0, -0x4300
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950144));
    // 0x15478c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x15478cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x154790: 0x3c033f4c  lui         $v1, 0x3F4C
    ctx->pc = 0x154790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16204 << 16));
    // 0x154794: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x154794u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x154798: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x154798u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15479c: 0xc4c00088  lwc1        $f0, 0x88($a2)
    ctx->pc = 0x15479cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1547a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1547a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1547a4: 0xe4c00088  swc1        $f0, 0x88($a2)
    ctx->pc = 0x1547a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
    // 0x1547a8: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x1547A8u;
    {
        const bool branch_taken_0x1547a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1547a8) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x1547B0u;
}
