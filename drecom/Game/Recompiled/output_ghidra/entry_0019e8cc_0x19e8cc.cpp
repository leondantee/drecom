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

// Function: entry_0019e8cc
// Address: 0x19e8cc - 0x19e9c8
void entry_0019e8cc_0x19e8cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019e8cc_0x19e8cc");
#endif

    ctx->pc = 0x19e8ccu;

    // 0x19e8cc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8d0: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8d4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e8d8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e8d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e8dc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e8e0: 0x30420070  andi        $v0, $v0, 0x70
    ctx->pc = 0x19e8e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)112);
    // 0x19e8e4: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x19E8E4u;
    {
        const bool branch_taken_0x19e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e8e4) {
            ctx->pc = 0x19EAD0u;
            return;
        }
    }
    ctx->pc = 0x19E8ECu;
    // 0x19e8ec: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e8f0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e8f4: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e8f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e8fc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x19e8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x19e900: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e904: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e908: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e908u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e90c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19e90cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e910: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x19e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x19e914: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x19e914u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x19e918: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x19e918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
    // 0x19e91c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e920: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e920u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e924: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e928: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x19e928u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19e92c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e930: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x19e930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x19e934: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x19E934u;
    {
        const bool branch_taken_0x19e934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e934) {
            ctx->pc = 0x19E9C8u;
            return;
        }
    }
    ctx->pc = 0x19E93Cu;
    // 0x19e93c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e93cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e940: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e944: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e948: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e94c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x19e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x19e950: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x19e950u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x19e954: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e958: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x19e958u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e95c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e95cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e960: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e960u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e964: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e968: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19e96c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e970: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x19e970u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x19e974: 0x10200042  beqz        $at, . + 4 + (0x42 << 2)
    ctx->pc = 0x19E974u;
    {
        const bool branch_taken_0x19e974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e974) {
            ctx->pc = 0x19EA80u;
            return;
        }
    }
    ctx->pc = 0x19E97Cu;
    // 0x19e97c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e980: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e980u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e984: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x19e984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e988: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x19e988u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x19e98c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19e98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19e990: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19e990u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19e994: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x19e994u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x19e998: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e998u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e99c: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e99cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9a0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19e9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19e9a4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x19e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
    // 0x19e9a8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x19e9a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x19e9ac: 0x8c228070  lw          $v0, -0x7F90($at)
    ctx->pc = 0x19e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x388070u));
    // 0x19e9b0: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x19e9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x19e9b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x19e9b4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19e9b8: 0x3042008f  andi        $v0, $v0, 0x8F
    ctx->pc = 0x19e9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)143);
    // 0x19e9bc: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x19e9bcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x19e9c0: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x19E9C0u;
    {
        const bool branch_taken_0x19e9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e9c0) {
            ctx->pc = 0x19EA80u;
            return;
        }
    }
    ctx->pc = 0x19E9C8u;
}
