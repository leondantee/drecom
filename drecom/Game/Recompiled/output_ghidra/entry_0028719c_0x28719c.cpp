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

// Function: entry_0028719c
// Address: 0x28719c - 0x28723c
void entry_0028719c_0x28719c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028719c_0x28719c");
#endif

    ctx->pc = 0x28719cu;

    // 0x28719c: 0x8e485dc0  lw          $t0, 0x5DC0($s2)
    ctx->pc = 0x28719cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24000)));
    // 0x2871a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2871a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2871a4: 0x15040025  bne         $t0, $a0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2871A4u;
    {
        const bool branch_taken_0x2871a4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 4));
        if (branch_taken_0x2871a4) {
            ctx->pc = 0x28723Cu;
            return;
        }
    }
    ctx->pc = 0x2871ACu;
    // 0x2871ac: 0x8fa700d0  lw          $a3, 0xD0($sp)
    ctx->pc = 0x2871acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2871b0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2871b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2871b4: 0x3c025555  lui         $v0, 0x5555
    ctx->pc = 0x2871b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21845 << 16));
    // 0x2871b8: 0x34465556  ori         $a2, $v0, 0x5556
    ctx->pc = 0x2871b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21846);
    // 0x2871bc: 0xc70018  mult        $zero, $a2, $a3
    ctx->pc = 0x2871bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2871c0: 0x71fc2  srl         $v1, $a3, 31
    ctx->pc = 0x2871c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
    // 0x2871c4: 0x0  nop
    ctx->pc = 0x2871c4u;
    // NOP
    // 0x2871c8: 0x3810  mfhi        $a3
    ctx->pc = 0x2871c8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x2871cc: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x2871ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x2871d0: 0x8faa00d4  lw          $t2, 0xD4($sp)
    ctx->pc = 0x2871d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2871d4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2871d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2871d8: 0x3c0b5555  lui         $t3, 0x5555
    ctx->pc = 0x2871d8u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)21845 << 16));
    // 0x2871dc: 0x35625556  ori         $v0, $t3, 0x5556
    ctx->pc = 0x2871dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)21846);
    // 0x2871e0: 0x4a0018  mult        $zero, $v0, $t2
    ctx->pc = 0x2871e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2871e4: 0xa2fc2  srl         $a1, $t2, 31
    ctx->pc = 0x2871e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
    // 0x2871e8: 0x0  nop
    ctx->pc = 0x2871e8u;
    // NOP
    // 0x2871ec: 0x4810  mfhi        $t1
    ctx->pc = 0x2871ecu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x2871f0: 0x1253021  addu        $a2, $t1, $a1
    ctx->pc = 0x2871f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x2871f4: 0x62200  sll         $a0, $a2, 8
    ctx->pc = 0x2871f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x2871f8: 0x641025  or          $v0, $v1, $a0
    ctx->pc = 0x2871f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2871fc: 0x8fa600d8  lw          $a2, 0xD8($sp)
    ctx->pc = 0x2871fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x287200: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x287200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x287204: 0x3c055555  lui         $a1, 0x5555
    ctx->pc = 0x287204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21845 << 16));
    // 0x287208: 0x34a35556  ori         $v1, $a1, 0x5556
    ctx->pc = 0x287208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)21846);
    // 0x28720c: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x28720cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x287210: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x287210u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x287214: 0x0  nop
    ctx->pc = 0x287214u;
    // NOP
    // 0x287218: 0x4010  mfhi        $t0
    ctx->pc = 0x287218u;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x28721c: 0x1061821  addu        $v1, $t0, $a2
    ctx->pc = 0x28721cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x287220: 0x34c00  sll         $t1, $v1, 16
    ctx->pc = 0x287220u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x287224: 0x1222025  or          $a0, $t1, $v0
    ctx->pc = 0x287224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x287228: 0x8fa600dc  lw          $a2, 0xDC($sp)
    ctx->pc = 0x287228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x28722c: 0x62e00  sll         $a1, $a2, 24
    ctx->pc = 0x28722cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x287230: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x287230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x287234: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x287234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x287238: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x287238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    ctx->pc = 0x28723cu;
}
