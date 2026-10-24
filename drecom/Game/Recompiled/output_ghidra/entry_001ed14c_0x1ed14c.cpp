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

// Function: entry_001ed14c
// Address: 0x1ed14c - 0x1ed278
void entry_001ed14c_0x1ed14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed14c_0x1ed14c");
#endif

    switch (ctx->pc) {
        case 0x1ed16cu: goto label_1ed16c;
        default: break;
    }

    ctx->pc = 0x1ed14cu;

    // 0x1ed14c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed150: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed150u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed154: 0x2402cfff  addiu       $v0, $zero, -0x3001
    ctx->pc = 0x1ed154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
    // 0x1ed158: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1ed158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1ed15c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed160: 0xac221a58  sw          $v0, 0x1A58($at)
    ctx->pc = 0x1ed160u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed164: 0xc067694  jal         func_19DA50
    ctx->pc = 0x1ED164u;
    SET_GPR_U32(ctx, 31, 0x1ED16Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x1ED164u, 0x1ED16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ED16Cu;
label_1ed16c:
    // 0x1ed16c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1ed16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ed170: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x1ed170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1ed174: 0x32300  sll         $a0, $v1, 12
    ctx->pc = 0x1ed174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 12));
    // 0x1ed178: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed17c: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed17cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed180: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ed180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ed184: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed184u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed188: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed188u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed18c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed18cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed190: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed190u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed194: 0x30643000  andi        $a0, $v1, 0x3000
    ctx->pc = 0x1ed194u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12288);
    // 0x1ed198: 0x41b02  srl         $v1, $a0, 12
    ctx->pc = 0x1ed198u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 12));
    // 0x1ed19c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed19cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed1a0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed1a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed1a4: 0x3943c  dsll32      $s2, $v1, 16
    ctx->pc = 0x1ed1a4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed1a8: 0x12943f  dsra32      $s2, $s2, 16
    ctx->pc = 0x1ed1a8u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 16));
    // 0x1ed1ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed1acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed1b0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1b4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed1b8: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ed1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ed1bc: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed1bcu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed1c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ed1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed1c4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed1c8: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1ed1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed1cc: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed1d0: 0x24649d00  addiu       $a0, $v1, -0x6300
    ctx->pc = 0x1ed1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ed1d4: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ed1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ed1d8: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x1ed1d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1ed1dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x1ed1dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ed1e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1e4: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed1e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed1e8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1ec: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed1f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1f4: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed1f8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed1fc: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed200: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed200u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed204: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed204u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed208: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x1ed208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x1ed20c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ed20cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ed210: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed214: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed214u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed218: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed21c: 0x8c251a58  lw          $a1, 0x1A58($at)
    ctx->pc = 0x1ed21cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed220: 0x2403bfff  addiu       $v1, $zero, -0x4001
    ctx->pc = 0x1ed220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed224: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x1ed224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1ed228: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed228u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed22c: 0xac231a58  sw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed22cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed230: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed234: 0x24851330  addiu       $a1, $a0, 0x1330
    ctx->pc = 0x1ed234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4912));
    // 0x1ed238: 0x8cb00068  lw          $s0, 0x68($a1)
    ctx->pc = 0x1ed238u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
    // 0x1ed23c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED23Cu;
    {
        const bool branch_taken_0x1ed23c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed23c) {
            ctx->pc = 0x1ED278u;
            return;
        }
    }
    ctx->pc = 0x1ED244u;
    // 0x1ed244: 0x12243c  dsll32      $a0, $s2, 16
    ctx->pc = 0x1ed244u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 16));
    // 0x1ed248: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed248u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed24c: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1ed24cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1ed250: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ed250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ed254: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1ed254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed258: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1ed258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1ed25c: 0x24649d00  addiu       $a0, $v1, -0x6300
    ctx->pc = 0x1ed25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941952));
    // 0x1ed260: 0x851821  addu        $v1, $a0, $a1
    ctx->pc = 0x1ed260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1ed264: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1ed264u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1ed268: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1ed268u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed26c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1ed26cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1ed270: 0x26031330  addiu       $v1, $s0, 0x1330
    ctx->pc = 0x1ed270u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4912));
    // 0x1ed274: 0xa4640078  sh          $a0, 0x78($v1)
    ctx->pc = 0x1ed274u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1ed278u;
}
