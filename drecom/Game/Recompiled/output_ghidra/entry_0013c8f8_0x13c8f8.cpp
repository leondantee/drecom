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

// Function: entry_0013c8f8
// Address: 0x13c8f8 - 0x13ca38
void entry_0013c8f8_0x13c8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c8f8_0x13c8f8");
#endif

    switch (ctx->pc) {
        case 0x13c934u: goto label_13c934;
        default: break;
    }

    ctx->pc = 0x13c8f8u;

    // 0x13c8f8: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c8fc: 0xafa400d4  sw          $a0, 0xD4($sp)
    ctx->pc = 0x13c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 4));
    // 0x13c900: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c900u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c908: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c908u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c90c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c910: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13c910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c914: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x13c914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x13c918: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c91c: 0xac440020  sw          $a0, 0x20($v0)
    ctx->pc = 0x13c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 4));
    // 0x13c920: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x13c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13c924: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x13c924u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c928: 0x93a600df  lbu         $a2, 0xDF($sp)
    ctx->pc = 0x13c928u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c92c: 0xc04f6b0  jal         func_13DAC0
    ctx->pc = 0x13C92Cu;
    SET_GPR_U32(ctx, 31, 0x13C934u);
    ctx->pc = 0x13DAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DAC0u, 0x13C92Cu, 0x13C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C934u;
label_13c934:
    // 0x13c934: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x13c934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x13c938: 0x24620150  addiu       $v0, $v1, 0x150
    ctx->pc = 0x13c938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x13c93c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c93cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c940: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x13c940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13c944: 0xafa400d0  sw          $a0, 0xD0($sp)
    ctx->pc = 0x13c944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 4));
    // 0x13c948: 0x93a200df  lbu         $v0, 0xDF($sp)
    ctx->pc = 0x13c948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 223)));
    // 0x13c94c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c950: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c950u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c954: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x13c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c958: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x13c958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c95c: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x13c95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x13c960: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c964: 0xac440084  sw          $a0, 0x84($v0)
    ctx->pc = 0x13c964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 4));
    // 0x13c968: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c96c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x13c96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x13c970: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x13c970u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x13c974: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x13c974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c978: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x13c978u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x13c97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13c97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13c980: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x13c980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13c984: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x13c984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x13c988: 0x2462b7a0  addiu       $v0, $v1, -0x4860
    ctx->pc = 0x13c988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948768));
    // 0x13c98c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13c98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c990: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13c990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c994: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c998: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c99c: 0x3c153000  lui         $s5, 0x3000
    ctx->pc = 0x13c99cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12288 << 16));
    // 0x13c9a0: 0x55b025  or          $s6, $v0, $s5
    ctx->pc = 0x13c9a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
    // 0x13c9a4: 0x8fb700b0  lw          $s7, 0xB0($sp)
    ctx->pc = 0x13c9a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13c9a8: 0x92fe0001  lbu         $fp, 0x1($s7)
    ctx->pc = 0x13c9a8u;
    SET_GPR_ZE32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
    // 0x13c9ac: 0x33d200ff  andi        $s2, $fp, 0xFF
    ctx->pc = 0x13c9acu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)255);
    // 0x13c9b0: 0x1280c0  sll         $s0, $s2, 3
    ctx->pc = 0x13c9b0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x13c9b4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x13c9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x13c9b8: 0x2442b7a0  addiu       $v0, $v0, -0x4860
    ctx->pc = 0x13c9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948768));
    // 0x13c9bc: 0x509821  addu        $s3, $v0, $s0
    ctx->pc = 0x13c9bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13c9c0: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13c9c4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x13c9c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x13c9c8: 0x2113e  dsrl32      $v0, $v0, 4
    ctx->pc = 0x13c9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 4));
    // 0x13c9cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c9ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c9d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x13c9d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x13c9d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13c9d8: 0x2c21825  or          $v1, $s6, $v0
    ctx->pc = 0x13c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x13c9dc: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c9e0: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x13c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x13c9e4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x13c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13c9e8: 0xfc400008  sd          $zero, 0x8($v0)
    ctx->pc = 0x13c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 0));
    // 0x13c9ec: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13c9f0: 0x8c4200a0  lw          $v0, 0xA0($v0)
    ctx->pc = 0x13c9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x13c9f4: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x13c9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x13c9f8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x13c9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13c9fc: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x13c9fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13ca00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x13ca00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ca04: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13ca08: 0xafa300b8  sw          $v1, 0xB8($sp)
    ctx->pc = 0x13ca08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 3));
    // 0x13ca0c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x13ca0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13ca10: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13ca10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13ca14: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x13ca14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x13ca18: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca1c: 0x8c540030  lw          $s4, 0x30($v0)
    ctx->pc = 0x13ca1cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13ca20: 0xafb400b4  sw          $s4, 0xB4($sp)
    ctx->pc = 0x13ca20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 20));
    // 0x13ca24: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca28: 0x8c530034  lw          $s3, 0x34($v0)
    ctx->pc = 0x13ca28u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13ca2c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x13ca2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x13ca30: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x13ca30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x13ca34: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x13ca34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
    ctx->pc = 0x13ca38u;
}
