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

// Function: entry_0018c408
// Address: 0x18c408 - 0x18c4b4
void entry_0018c408_0x18c408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c408_0x18c408");
#endif

    switch (ctx->pc) {
        case 0x18c41cu: goto label_18c41c;
        case 0x18c430u: goto label_18c430;
        default: break;
    }

    ctx->pc = 0x18c408u;

    // 0x18c408: 0xae1101fc  sw          $s1, 0x1FC($s0)
    ctx->pc = 0x18c408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 508), GPR_U32(ctx, 17));
    // 0x18c40c: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x18c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
    // 0x18c410: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x18c410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18c414: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x18C414u;
    SET_GPR_U32(ctx, 31, 0x18C41Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x18C41Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C41Cu) { return; }
    ctx->pc = 0x18C41Cu;
label_18c41c:
    // 0x18c41c: 0x26040180  addiu       $a0, $s0, 0x180
    ctx->pc = 0x18c41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
    // 0x18c420: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x18c420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x18c424: 0x260600b0  addiu       $a2, $s0, 0xB0
    ctx->pc = 0x18c424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18c428: 0xc040c92  jal         func_103248
    ctx->pc = 0x18C428u;
    SET_GPR_U32(ctx, 31, 0x18C430u);
    ctx->pc = 0x103248u;
    {
        ctx->pc = 0x18C430u;
        ps2_stubs::sceVu0TransMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x18C430u) { return; }
    ctx->pc = 0x18C430u;
label_18c430:
    // 0x18c430: 0x92020139  lbu         $v0, 0x139($s0)
    ctx->pc = 0x18c430u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 313)));
    // 0x18c434: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c438: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x18C438u;
    {
        const bool branch_taken_0x18c438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18c438) {
            ctx->pc = 0x18C4B4u;
            return;
        }
    }
    ctx->pc = 0x18C440u;
    // 0x18c440: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c444: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18c444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18c448: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18c448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c44c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c44cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c450: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c454: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c458: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x18c458u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18c45c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c460: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x18c460u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x18c464: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x18c464u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x18c468: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x18c468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18c46c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c470: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x18c470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x18c474: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x18c474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x18c478: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x18c478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x18c47c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x18c47cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x18c480: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x18c480u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x18c484: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c488: 0x92020139  lbu         $v0, 0x139($s0)
    ctx->pc = 0x18c488u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 313)));
    // 0x18c48c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x18c48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c490: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18c490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x18c494: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x18c494u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x18c498: 0x0  nop
    ctx->pc = 0x18c498u;
    // NOP
    // 0x18c49c: 0x0  nop
    ctx->pc = 0x18c49cu;
    // NOP
    // 0x18c4a0: 0x1010  mfhi        $v0
    ctx->pc = 0x18c4a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x18c4a4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x18c4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x18c4a8: 0x92020138  lbu         $v0, 0x138($s0)
    ctx->pc = 0x18c4a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 312)));
    // 0x18c4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18c4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18c4b0: 0xa2020138  sb          $v0, 0x138($s0)
    ctx->pc = 0x18c4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 312), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x18c4b4u;
}
