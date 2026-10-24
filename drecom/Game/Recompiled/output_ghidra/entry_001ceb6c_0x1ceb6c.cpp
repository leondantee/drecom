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

// Function: entry_001ceb6c
// Address: 0x1ceb6c - 0x1cec04
void entry_001ceb6c_0x1ceb6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ceb6c_0x1ceb6c");
#endif

    ctx->pc = 0x1ceb6cu;

    // 0x1ceb6c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ceb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceb70: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1ceb70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1ceb74: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x1ceb74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1ceb78: 0x30c50080  andi        $a1, $a2, 0x80
    ctx->pc = 0x1ceb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1ceb7c: 0x10a00021  beqz        $a1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1CEB7Cu;
    {
        const bool branch_taken_0x1ceb7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ceb7c) {
            ctx->pc = 0x1CEC04u;
            return;
        }
    }
    ctx->pc = 0x1CEB84u;
    // 0x1ceb84: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ceb84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ceb88: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1ceb88u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1ceb8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1ceb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1ceb90: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ceb90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ceb94: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ceb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ceb98: 0xac241a98  sw          $a0, 0x1A98($at)
    ctx->pc = 0x1ceb98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1ceb9c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1ceb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1ceba0: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1ceba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ceba4: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1ceba4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ceba8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x1ceba8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cebac: 0x8cc31b6c  lw          $v1, 0x1B6C($a2)
    ctx->pc = 0x1cebacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 7020)));
    // 0x1cebb0: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CEBB0u;
    {
        const bool branch_taken_0x1cebb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cebb0) {
            ctx->pc = 0x1CEC04u;
            return;
        }
    }
    ctx->pc = 0x1CEBB8u;
    // 0x1cebb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cebbc: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cebc0: 0xaca41b6c  sw          $a0, 0x1B6C($a1)
    ctx->pc = 0x1cebc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7020), GPR_U32(ctx, 4));
    // 0x1cebc4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cebc8: 0x846315ec  lh          $v1, 0x15EC($v1)
    ctx->pc = 0x1cebc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1cebcc: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1CEBCCu;
    {
        const bool branch_taken_0x1cebcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cebcc) {
            ctx->pc = 0x1CEC04u;
            return;
        }
    }
    ctx->pc = 0x1CEBD4u;
    // 0x1cebd4: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cebd8: 0x84a415ec  lh          $a0, 0x15EC($a1)
    ctx->pc = 0x1cebd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 5612)));
    // 0x1cebdc: 0x2483ff6a  addiu       $v1, $a0, -0x96
    ctx->pc = 0x1cebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967146));
    // 0x1cebe0: 0xa4a315ec  sh          $v1, 0x15EC($a1)
    ctx->pc = 0x1cebe0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 5612), (uint16_t)GPR_U32(ctx, 3));
    // 0x1cebe4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1cebe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cebe8: 0x848315ec  lh          $v1, 0x15EC($a0)
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 5612)));
    // 0x1cebec: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1cebecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1cebf0: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1cebf0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1cebf4: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CEBF4u;
    {
        const bool branch_taken_0x1cebf4 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1cebf4) {
            ctx->pc = 0x1CEC04u;
            return;
        }
    }
    ctx->pc = 0x1CEBFCu;
    // 0x1cebfc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1cec00: 0xa46015ec  sh          $zero, 0x15EC($v1)
    ctx->pc = 0x1cec00u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1cec04u;
}
