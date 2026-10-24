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

// Function: entry_001c70d8
// Address: 0x1c70d8 - 0x1c7170
void entry_001c70d8_0x1c70d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c70d8_0x1c70d8");
#endif

    ctx->pc = 0x1c70d8u;

    // 0x1c70d8: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1c70d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c70dc: 0x910309db  lbu         $v1, 0x9DB($t0)
    ctx->pc = 0x1c70dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2523)));
    // 0x1c70e0: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x1c70e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c70e4: 0x30a40080  andi        $a0, $a1, 0x80
    ctx->pc = 0x1c70e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x1c70e8: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C70E8u;
    {
        const bool branch_taken_0x1c70e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c70e8) {
            ctx->pc = 0x1C7170u;
            return;
        }
    }
    ctx->pc = 0x1C70F0u;
    // 0x1c70f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c70f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c70f4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x1c70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1c70f8: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x1c70f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x1c70fc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1c70fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1c7100: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1c7100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1c7104: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1c7104u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1c7108: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1c7108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1c710c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c710cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7110: 0xa0a2157d  sb          $v0, 0x157D($a1)
    ctx->pc = 0x1c7110u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5501), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c7114: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7118: 0x8c831b6c  lw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1c7118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 7020)));
    // 0x1c711c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1C711Cu;
    {
        const bool branch_taken_0x1c711c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c711c) {
            ctx->pc = 0x1C7170u;
            return;
        }
    }
    ctx->pc = 0x1C7124u;
    // 0x1c7124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c7128: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1c7128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c712c: 0xac831b6c  sw          $v1, 0x1B6C($a0)
    ctx->pc = 0x1c712cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7020), GPR_U32(ctx, 3));
    // 0x1c7130: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7134: 0x846515ec  lh          $a1, 0x15EC($v1)
    ctx->pc = 0x1c7134u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c7138: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C7138u;
    {
        const bool branch_taken_0x1c7138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7138) {
            ctx->pc = 0x1C7170u;
            return;
        }
    }
    ctx->pc = 0x1C7140u;
    // 0x1c7140: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1c7140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7144: 0x84c715ec  lh          $a3, 0x15EC($a2)
    ctx->pc = 0x1c7144u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 5612)));
    // 0x1c7148: 0x24e8ff6a  addiu       $t0, $a3, -0x96
    ctx->pc = 0x1c7148u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967146));
    // 0x1c714c: 0xa4c815ec  sh          $t0, 0x15EC($a2)
    ctx->pc = 0x1c714cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 5612), (uint16_t)GPR_U32(ctx, 8));
    // 0x1c7150: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7154: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1c7154u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1c7158: 0x3243c  dsll32      $a0, $v1, 16
    ctx->pc = 0x1c7158u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1c715c: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x1c715cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x1c7160: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C7160u;
    {
        const bool branch_taken_0x1c7160 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x1c7160) {
            ctx->pc = 0x1C7170u;
            return;
        }
    }
    ctx->pc = 0x1C7168u;
    // 0x1c7168: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c716c: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1c716cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1c7170u;
}
