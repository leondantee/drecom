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

// Function: entry_001ed470
// Address: 0x1ed470 - 0x1ed540
void entry_001ed470_0x1ed470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ed470_0x1ed470");
#endif

    ctx->pc = 0x1ed470u;

    // 0x1ed470: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed474: 0x24641330  addiu       $a0, $v1, 0x1330
    ctx->pc = 0x1ed474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed478: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x1ed478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x1ed47c: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1ED47Cu;
    {
        const bool branch_taken_0x1ed47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed47c) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ED484u;
    // 0x1ed484: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed484u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed488: 0x8c241a58  lw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed488u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed48c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1ed48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x1ed490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1ed490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1ed494: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1ED494u;
    {
        const bool branch_taken_0x1ed494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed494) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ED49Cu;
    // 0x1ed49c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ed49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ed4a0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4a4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x1ed4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed4a8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1ed4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1ed4ac: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4b0: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x1ed4b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ed4b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4b8: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x1ed4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed4bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4c0: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x1ed4c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1ed4c4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4c8: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1ed4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x1ed4cc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed4ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed4d0: 0x8c231a58  lw          $v1, 0x1A58($at)
    ctx->pc = 0x1ed4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A58u));
    // 0x1ed4d4: 0x2412bfff  addiu       $s2, $zero, -0x4001
    ctx->pc = 0x1ed4d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950911));
    // 0x1ed4d8: 0x722024  and         $a0, $v1, $s2
    ctx->pc = 0x1ed4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x1ed4dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1ed4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1ed4e0: 0xac241a58  sw          $a0, 0x1A58($at)
    ctx->pc = 0x1ed4e0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x5D1A58u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5D1A58u, _value); } while (0);
    // 0x1ed4e4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4e8: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1ed4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1ed4ec: 0x8c700054  lw          $s0, 0x54($v1)
    ctx->pc = 0x1ed4ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1ed4f0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1ed4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed4f4: 0x846410a6  lh          $a0, 0x10A6($v1)
    ctx->pc = 0x1ed4f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4262)));
    // 0x1ed4f8: 0x41c3c  dsll32      $v1, $a0, 16
    ctx->pc = 0x1ed4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 16));
    // 0x1ed4fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed4fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed500: 0x2861012d  slti        $at, $v1, 0x12D
    ctx->pc = 0x1ed500u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)301) ? 1 : 0);
    // 0x1ed504: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x1ED504u;
    {
        const bool branch_taken_0x1ed504 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ed504) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ED50Cu;
    // 0x1ed50c: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed50cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed510: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x1ed510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x1ed514: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x1ed514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x1ed518: 0x28610258  slti        $at, $v1, 0x258
    ctx->pc = 0x1ed518u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)600) ? 1 : 0);
    // 0x1ed51c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1ED51Cu;
    {
        const bool branch_taken_0x1ed51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed51c) {
            ctx->pc = 0x1ED540u;
            return;
        }
    }
    ctx->pc = 0x1ED524u;
    // 0x1ed524: 0x860310a6  lh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed524u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4262)));
    // 0x1ed528: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x1ed528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x1ed52c: 0xa60310a6  sh          $v1, 0x10A6($s0)
    ctx->pc = 0x1ed52cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4262), (uint16_t)GPR_U32(ctx, 3));
    // 0x1ed530: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1ed530u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ed534: 0x848310a6  lh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed534u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4262)));
    // 0x1ed538: 0x2463ff9c  addiu       $v1, $v1, -0x64
    ctx->pc = 0x1ed538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967196));
    // 0x1ed53c: 0xa48310a6  sh          $v1, 0x10A6($a0)
    ctx->pc = 0x1ed53cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4262), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1ed540u;
}
