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

// Function: entry_0021d4e0
// Address: 0x21d4e0 - 0x21d628
void entry_0021d4e0_0x21d4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021d4e0_0x21d4e0");
#endif

    switch (ctx->pc) {
        case 0x21d4e8u: goto label_21d4e8;
        default: break;
    }

    ctx->pc = 0x21d4e0u;

    // 0x21d4e0: 0xc067654  jal         func_19D950
    ctx->pc = 0x21D4E0u;
    SET_GPR_U32(ctx, 31, 0x21D4E8u);
    ctx->pc = 0x19D950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D950u, 0x21D4E0u, 0x21D4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D4E8u;
label_21d4e8:
    // 0x21d4e8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21d4ec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x21d4ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21d4f0: 0x0  nop
    ctx->pc = 0x21d4f0u;
    // NOP
    // 0x21d4f4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21d4f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21d4f8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x21d4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x21d4fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21d4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21d500: 0x0  nop
    ctx->pc = 0x21d500u;
    // NOP
    // 0x21d504: 0x46010340  add.s       $f13, $f0, $f1
    ctx->pc = 0x21d504u;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21d508: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x21d50c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x21d50cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21d510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d514: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x21d514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x21d518: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d51c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d520: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d524: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d528: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d52c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d530: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d534: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d538: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d538u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d53c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d53cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d540: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d544: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d548: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d54c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d550: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d554: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d554u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d558: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d558u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d55c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d55cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d560: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21d564: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21d564u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x21d568: 0x0  nop
    ctx->pc = 0x21d568u;
    // NOP
    // 0x21d56c: 0x0  nop
    ctx->pc = 0x21d56cu;
    // NOP
    // 0x21d570: 0x1810  mfhi        $v1
    ctx->pc = 0x21d570u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21d574: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d578: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x21d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
    // 0x21d57c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d580: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21d580u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d584: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x21d584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d588: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d58c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d590: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d590u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d594: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d598: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d59c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5a0: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x21d5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x21d5a4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d5a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d5a8: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x21d5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x21d5ac: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x21d5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x21d5b0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x21d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21d5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d5b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x21d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x21d5bc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x21d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x21d5c0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x21d5c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21d5c4: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x21d5c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x21d5c8: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x21d5c8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x21d5cc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x21d5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5d0: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x21d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x21d5d4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x21d5d4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x21d5d8: 0x0  nop
    ctx->pc = 0x21d5d8u;
    // NOP
    // 0x21d5dc: 0x0  nop
    ctx->pc = 0x21d5dcu;
    // NOP
    // 0x21d5e0: 0x1810  mfhi        $v1
    ctx->pc = 0x21d5e0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x21d5e4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d5e8: 0x244210f0  addiu       $v0, $v0, 0x10F0
    ctx->pc = 0x21d5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4336));
    // 0x21d5ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d5f0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x21d5f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21d5f4: 0x304800ff  andi        $t0, $v0, 0xFF
    ctx->pc = 0x21d5f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21d5f8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x21d5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x21d5fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x21d5fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x21d600: 0x320b00ff  andi        $t3, $s0, 0xFF
    ctx->pc = 0x21d600u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x21d604: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x21d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d608: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d60c: 0x244610e0  addiu       $a2, $v0, 0x10E0
    ctx->pc = 0x21d60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d610: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x21d610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x21d614: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x21d614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x21d618: 0x244910e0  addiu       $t1, $v0, 0x10E0
    ctx->pc = 0x21d618u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
    // 0x21d61c: 0x27aa0030  addiu       $t2, $sp, 0x30
    ctx->pc = 0x21d61cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x21d620: 0xc087348  jal         func_21CD20
    ctx->pc = 0x21D620u;
    SET_GPR_U32(ctx, 31, 0x21D628u);
    ctx->pc = 0x21CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD20u, 0x21D620u, 0x21D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D628u;
}
