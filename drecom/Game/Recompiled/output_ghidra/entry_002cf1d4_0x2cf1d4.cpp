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

// Function: entry_002cf1d4
// Address: 0x2cf1d4 - 0x2cf2a0
void entry_002cf1d4_0x2cf1d4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cf1d4_0x2cf1d4");
#endif

    ctx->pc = 0x2cf1d4u;

    // 0x2cf1d4: 0x16400032  bnez        $s2, . + 4 + (0x32 << 2)
    ctx->pc = 0x2CF1D4u;
    {
        const bool branch_taken_0x2cf1d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf1d4) {
            ctx->pc = 0x2CF2A0u;
            return;
        }
    }
    ctx->pc = 0x2CF1DCu;
    // 0x2cf1dc: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf1dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cf1e0: 0x8c257508  lw          $a1, 0x7508($at)
    ctx->pc = 0x2cf1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x387508u));
    // 0x2cf1e4: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x2cf1e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x2cf1e8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf1ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf1f0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2cf1f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2cf1f4: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2cf1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x2cf1f8: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf1f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cf1fc: 0x8c237508  lw          $v1, 0x7508($at)
    ctx->pc = 0x2cf1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x387508u));
    // 0x2cf200: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x2cf200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x2cf204: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2cf204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2cf208: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2cf208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf20c: 0x3083ff00  andi        $v1, $a0, 0xFF00
    ctx->pc = 0x2cf20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65280);
    // 0x2cf210: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x2cf210u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x2cf214: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x2cf214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2cf218: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x2cf218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x2cf21c: 0xac237508  sw          $v1, 0x7508($at)
    ctx->pc = 0x2cf21cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x2cf220: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2cf220u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x2cf224: 0x30690001  andi        $t1, $v1, 0x1
    ctx->pc = 0x2cf224u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2cf228: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x2cf228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf22c: 0x2487134c  addiu       $a3, $a0, 0x134C
    ctx->pc = 0x2cf22cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4940));
    // 0x2cf230: 0x103040  sll         $a2, $s0, 1
    ctx->pc = 0x2cf230u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf234: 0xd02821  addu        $a1, $a2, $s0
    ctx->pc = 0x2cf234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x2cf238: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x2cf238u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cf23c: 0x8ce80000  lw          $t0, 0x0($a3)
    ctx->pc = 0x2cf23cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2cf240: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x2cf240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x2cf244: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x2cf244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2cf248: 0xa92021  addu        $a0, $a1, $t1
    ctx->pc = 0x2cf248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x2cf24c: 0xacc40010  sw          $a0, 0x10($a2)
    ctx->pc = 0x2cf24cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 4));
    // 0x2cf250: 0x8fa90118  lw          $t1, 0x118($sp)
    ctx->pc = 0x2cf250u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf254: 0x2526134c  addiu       $a2, $t1, 0x134C
    ctx->pc = 0x2cf254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4940));
    // 0x2cf258: 0x102040  sll         $a0, $s0, 1
    ctx->pc = 0x2cf258u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf25c: 0x902821  addu        $a1, $a0, $s0
    ctx->pc = 0x2cf25cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x2cf260: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2cf260u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x2cf264: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x2cf264u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2cf268: 0xc51821  addu        $v1, $a2, $a1
    ctx->pc = 0x2cf268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2cf26c: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2cf26cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2cf270: 0x28e1000b  slti        $at, $a3, 0xB
    ctx->pc = 0x2cf270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x2cf274: 0x1420000a  bnez        $at, . + 4 + (0xA << 2)
    ctx->pc = 0x2CF274u;
    {
        const bool branch_taken_0x2cf274 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x2cf274) {
            ctx->pc = 0x2CF2A0u;
            return;
        }
    }
    ctx->pc = 0x2CF27Cu;
    // 0x2cf27c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2cf27cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cf280: 0x8faa0118  lw          $t2, 0x118($sp)
    ctx->pc = 0x2cf280u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x2cf284: 0x2557134c  addiu       $s7, $t2, 0x134C
    ctx->pc = 0x2cf284u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 10), 4940));
    // 0x2cf288: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x2cf288u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x2cf28c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2cf28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2cf290: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x2cf290u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x2cf294: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x2cf294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x2cf298: 0x64b021  addu        $s6, $v1, $a0
    ctx->pc = 0x2cf298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2cf29c: 0xaec90014  sw          $t1, 0x14($s6)
    ctx->pc = 0x2cf29cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 9));
    ctx->pc = 0x2cf2a0u;
}
