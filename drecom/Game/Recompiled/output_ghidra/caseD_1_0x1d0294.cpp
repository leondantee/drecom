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

// Function: caseD_1
// Address: 0x1d0294 - 0x1d032c
void caseD_1_0x1d0294(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x1d0294");
#endif

    ctx->pc = 0x1d0294u;

    // 0x1d0294: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d0294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0298: 0x906309db  lbu         $v1, 0x9DB($v1)
    ctx->pc = 0x1d0298u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2523)));
    // 0x1d029c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1d029cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1d02a0: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x1d02a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x1d02a4: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D02A4u;
    {
        const bool branch_taken_0x1d02a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02a4) {
            ctx->pc = 0x1D032Cu;
            return;
        }
    }
    ctx->pc = 0x1D02ACu;
    // 0x1d02ac: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d02acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d02b0: 0x8c241a98  lw          $a0, 0x1A98($at)
    ctx->pc = 0x1d02b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1d02b4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1d02b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1d02b8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1d02b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1d02bc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1d02bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1d02c0: 0xac231a98  sw          $v1, 0x1A98($at)
    ctx->pc = 0x1d02c0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5D1A98u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A98u, _value); } while (0);
    // 0x1d02c4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d02c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d02c8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d02cc: 0xa083157d  sb          $v1, 0x157D($a0)
    ctx->pc = 0x1d02ccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5501), (uint8_t)GPR_U32(ctx, 3));
    // 0x1d02d0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d02d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d02d4: 0x8c621b6c  lw          $v0, 0x1B6C($v1)
    ctx->pc = 0x1d02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7020)));
    // 0x1d02d8: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1D02D8u;
    {
        const bool branch_taken_0x1d02d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d02d8) {
            ctx->pc = 0x1D032Cu;
            return;
        }
    }
    ctx->pc = 0x1D02E0u;
    // 0x1d02e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d02e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d02e4: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d02e8: 0xac431b6c  sw          $v1, 0x1B6C($v0)
    ctx->pc = 0x1d02e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7020), GPR_U32(ctx, 3));
    // 0x1d02ec: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d02f0: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1d02f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1d02f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D02F4u;
    {
        const bool branch_taken_0x1d02f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d02f4) {
            ctx->pc = 0x1D032Cu;
            return;
        }
    }
    ctx->pc = 0x1D02FCu;
    // 0x1d02fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0300: 0x846215ec  lh          $v0, 0x15EC($v1)
    ctx->pc = 0x1d0300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 5612)));
    // 0x1d0304: 0x2442ff6a  addiu       $v0, $v0, -0x96
    ctx->pc = 0x1d0304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967146));
    // 0x1d0308: 0xa46215ec  sh          $v0, 0x15EC($v1)
    ctx->pc = 0x1d0308u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 5612), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d030c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d030cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0310: 0x844215ec  lh          $v0, 0x15EC($v0)
    ctx->pc = 0x1d0310u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 5612)));
    // 0x1d0314: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1d0314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1d0318: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1d0318u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1d031c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D031Cu;
    {
        const bool branch_taken_0x1d031c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1d031c) {
            ctx->pc = 0x1D032Cu;
            return;
        }
    }
    ctx->pc = 0x1D0324u;
    // 0x1d0324: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1d0324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1d0328: 0xa44015ec  sh          $zero, 0x15EC($v0)
    ctx->pc = 0x1d0328u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5612), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1d032cu;
}
