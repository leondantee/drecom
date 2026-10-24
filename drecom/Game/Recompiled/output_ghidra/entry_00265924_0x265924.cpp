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

// Function: entry_00265924
// Address: 0x265924 - 0x265a10
void entry_00265924_0x265924(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00265924_0x265924");
#endif

    switch (ctx->pc) {
        case 0x265974u: goto label_265974;
        case 0x265994u: goto label_265994;
        case 0x2659c8u: goto label_2659c8;
        default: break;
    }

    ctx->pc = 0x265924u;

    // 0x265924: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265928: 0x8c420a68  lw          $v0, 0xA68($v0)
    ctx->pc = 0x265928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x26592c: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x26592cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x265930: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x265930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x265934: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x265934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x265938: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x26593c: 0xac430a68  sw          $v1, 0xA68($v0)
    ctx->pc = 0x26593cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2664), GPR_U32(ctx, 3));
    // 0x265940: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265944: 0x8c500a68  lw          $s0, 0xA68($v0)
    ctx->pc = 0x265944u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
    // 0x265948: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x265948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x26594c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x26594cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x265950: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x265950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x265954: 0x2442e650  addiu       $v0, $v0, -0x19B0
    ctx->pc = 0x265954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960720));
    // 0x265958: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x265958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26595c: 0xac501590  sw          $s0, 0x1590($v0)
    ctx->pc = 0x26595cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5520), GPR_U32(ctx, 16));
    // 0x265960: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265960u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x265964: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x265964u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x265968: 0x24061350  addiu       $a2, $zero, 0x1350
    ctx->pc = 0x265968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4944));
    // 0x26596c: 0xc046314  jal         func_118C50
    ctx->pc = 0x26596Cu;
    SET_GPR_U32(ctx, 31, 0x265974u);
    ctx->pc = 0x118C50u;
    {
        ctx->pc = 0x265974u;
        ps2_stubs::memset(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x265974u) { return; }
    ctx->pc = 0x265974u;
label_265974:
    // 0x265974: 0x8fa200a4  lw          $v0, 0xA4($sp)
    ctx->pc = 0x265974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x265978: 0x24430a68  addiu       $v1, $v0, 0xA68
    ctx->pc = 0x265978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x26597c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x265980: 0x24421350  addiu       $v0, $v0, 0x1350
    ctx->pc = 0x265980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4944));
    // 0x265984: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x265984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x265988: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x265988u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x26598c: 0xc09909c  jal         func_264270
    ctx->pc = 0x26598Cu;
    SET_GPR_U32(ctx, 31, 0x265994u);
    ctx->pc = 0x264270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264270u, 0x26598Cu, 0x265994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x265994u;
label_265994:
    // 0x265994: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x265994u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x265998: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x265998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26599c: 0xa2020012  sb          $v0, 0x12($s0)
    ctx->pc = 0x26599cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 18), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659a0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2659a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2659a4: 0x300200ff  andi        $v0, $zero, 0xFF
    ctx->pc = 0x2659a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)255);
    // 0x2659a8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2659a8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2659acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2659b0: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x2659b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2659b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2659b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x2659b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2659bc: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x2659bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
    // 0x2659c0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2659C0u;
    SET_GPR_U32(ctx, 31, 0x2659C8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2659C0u, 0x2659C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2659C8u;
label_2659c8:
    // 0x2659c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2659c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2659cc: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x2659ccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x2659d0: 0xa2001219  sb          $zero, 0x1219($s0)
    ctx->pc = 0x2659d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4633), (uint8_t)GPR_U32(ctx, 0));
    // 0x2659d4: 0xae00121c  sw          $zero, 0x121C($s0)
    ctx->pc = 0x2659d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 0));
    // 0x2659d8: 0x8fa400d8  lw          $a0, 0xD8($sp)
    ctx->pc = 0x2659d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x2659dc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x2659dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x2659e0: 0x2463b898  addiu       $v1, $v1, -0x4768
    ctx->pc = 0x2659e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949016));
    // 0x2659e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2659e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2659e8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x2659e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2659ec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2659ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2659f0: 0xae031338  sw          $v1, 0x1338($s0)
    ctx->pc = 0x2659f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 3));
    // 0x2659f4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2659f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2659f8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2659f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2659fc: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2659FCu;
    {
        const bool branch_taken_0x2659fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2659fc) {
            ctx->pc = 0x265A10u;
            return;
        }
    }
    ctx->pc = 0x265A04u;
    // 0x265a04: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x265a04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x265a08: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x265A08u;
    {
        const bool branch_taken_0x265a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x265a08) {
            ctx->pc = 0x265DD0u;
            return;
        }
    }
    ctx->pc = 0x265A10u;
}
