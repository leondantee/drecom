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

// Function: entry_001c75f4
// Address: 0x1c75f4 - 0x1c768c
void entry_001c75f4_0x1c75f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c75f4_0x1c75f4");
#endif

    ctx->pc = 0x1c75f4u;

    // 0x1c75f4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c75f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c75f8: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1c75f8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1c75fc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c75fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c7600: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1c7600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1c7604: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C7604u;
    {
        const bool branch_taken_0x1c7604 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7604) {
            ctx->pc = 0x1C768Cu;
            return;
        }
    }
    ctx->pc = 0x1C760Cu;
    // 0x1c760c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c760cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c7610: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7610u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c7614: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1c7614u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1c7618: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c7618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c761c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c761cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c7620: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7620u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c7624: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1c7624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c7628: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c762c: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1c762cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c7630: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7634: 0x8c651b6c  lw          $a1, 0x1B6C($v1)
    ctx->pc = 0x1c7634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1c7638: 0x14a00014  bnez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C7638u;
    {
        const bool branch_taken_0x1c7638 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7638) {
            ctx->pc = 0x1C768Cu;
            return;
        }
    }
    ctx->pc = 0x1C7640u;
    // 0x1c7640: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c7640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7644: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7648: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1c7648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1c764c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c764cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7650: 0x846615ec  lh          $a2, 0x15EC($v1)
    ctx->pc = 0x1c7650u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c7654: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7654u;
    {
        const bool branch_taken_0x1c7654 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7654) {
            ctx->pc = 0x1C768Cu;
            return;
        }
    }
    ctx->pc = 0x1C765Cu;
    // 0x1c765c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c765cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7660: 0x84a315ec  lh          $v1, 0x15EC($a1)
    ctx->pc = 0x1c7660u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1c7664: 0x2464fed4  addiu       $a0, $v1, -0x12C
    ctx->pc = 0x1c7664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966996));
    // 0x1c7668: 0xa4a415ec  sh          $a0, 0x15EC($a1)
    ctx->pc = 0x1c7668u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 4));
    // 0x1c766c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7670: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1c7670u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c7674: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1c7674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1c7678: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1c7678u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1c767c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C767Cu;
    {
        const bool branch_taken_0x1c767c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c767c) {
            ctx->pc = 0x1C768Cu;
            return;
        }
    }
    ctx->pc = 0x1C7684u;
    // 0x1c7684: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7688: 0xa4a015ec  sh          $zero, 0x15EC($a1)
    ctx->pc = 0x1c7688u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c768cu;
}
