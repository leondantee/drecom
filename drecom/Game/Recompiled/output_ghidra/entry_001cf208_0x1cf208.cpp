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

// Function: entry_001cf208
// Address: 0x1cf208 - 0x1cf2a0
void entry_001cf208_0x1cf208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cf208_0x1cf208");
#endif

    ctx->pc = 0x1cf208u;

    // 0x1cf208: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf20c: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1cf20cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1cf210: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cf210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cf214: 0x30640080  andi        $a0, $v1, 0x80
    ctx->pc = 0x1cf214u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1cf218: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CF218u;
    {
        const bool branch_taken_0x1cf218 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf218) {
            ctx->pc = 0x1CF2A0u;
            return;
        }
    }
    ctx->pc = 0x1CF220u;
    // 0x1cf220: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf220u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cf224: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1cf224u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1cf228: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1cf22c: 0x642025  or          $a0, $v1, $a0
    ctx->pc = 0x1cf22cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1cf230: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1cf230u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1cf234: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1cf234u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1cf238: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cf238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1cf23c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf240: 0xa0a4157d  sb          $a0, 0x157D($a1)
    ctx->pc = 0x1cf240u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5501), (uint8_t)GPR_U32(ctx, 4));
    // 0x1cf244: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf248: 0x8c631b6c  lw          $v1, 0x1B6C($v1)
    ctx->pc = 0x1cf248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1cf24c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CF24Cu;
    {
        const bool branch_taken_0x1cf24c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf24c) {
            ctx->pc = 0x1CF2A0u;
            return;
        }
    }
    ctx->pc = 0x1CF254u;
    // 0x1cf254: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf258: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf25c: 0xac641b6c  sw          $a0, 0x1B6C($v1)
    ctx->pc = 0x1cf25cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7020), GPR_U32(ctx, 4));
    // 0x1cf260: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cf260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf264: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cf268: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CF268u;
    {
        const bool branch_taken_0x1cf268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf268) {
            ctx->pc = 0x1CF2A0u;
            return;
        }
    }
    ctx->pc = 0x1CF270u;
    // 0x1cf270: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cf270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf274: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cf274u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1cf278: 0x2483fed4  addiu       $v1, $a0, -0x12C
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966996));
    // 0x1cf27c: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cf27cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cf280: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf284: 0x846415ec  lh          $a0, 0x15EC($v1)
    ctx->pc = 0x1cf284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cf288: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1cf288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1cf28c: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cf28cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cf290: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF290u;
    {
        const bool branch_taken_0x1cf290 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cf290) {
            ctx->pc = 0x1CF2A0u;
            return;
        }
    }
    ctx->pc = 0x1CF298u;
    // 0x1cf298: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cf298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cf29c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cf29cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cf2a0u;
}
