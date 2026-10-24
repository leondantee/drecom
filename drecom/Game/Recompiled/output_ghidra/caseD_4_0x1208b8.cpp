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

// Function: caseD_4
// Address: 0x1208b8 - 0x1209e0
void caseD_4_0x1208b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x1208b8");
#endif

    ctx->pc = 0x1208b8u;

    // 0x1208b8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1208b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1208bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208c4: 0xac640060  sw          $a0, 0x60($v1)
    ctx->pc = 0x1208c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 4));
    // 0x1208c8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208d4: 0xac640064  sw          $a0, 0x64($v1)
    ctx->pc = 0x1208d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 4));
    // 0x1208d8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208e0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208e4: 0xac640068  sw          $a0, 0x68($v1)
    ctx->pc = 0x1208e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 4));
    // 0x1208e8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1208e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1208ec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1208f0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1208f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1208f4: 0xac6400f0  sw          $a0, 0xF0($v1)
    ctx->pc = 0x1208f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 240), GPR_U32(ctx, 4));
    // 0x1208f8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1208f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1208fc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1208fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120900: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120904: 0xac6400f4  sw          $a0, 0xF4($v1)
    ctx->pc = 0x120904u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 244), GPR_U32(ctx, 4));
    // 0x120908: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12090c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12090cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120910: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120914: 0xac6400f8  sw          $a0, 0xF8($v1)
    ctx->pc = 0x120914u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 248), GPR_U32(ctx, 4));
    // 0x120918: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12091c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12091cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120920: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120924: 0xac640330  sw          $a0, 0x330($v1)
    ctx->pc = 0x120924u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 816), GPR_U32(ctx, 4));
    // 0x120928: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12092c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12092cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120930: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120934: 0xac640334  sw          $a0, 0x334($v1)
    ctx->pc = 0x120934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 820), GPR_U32(ctx, 4));
    // 0x120938: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12093c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120940: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120944: 0xac640338  sw          $a0, 0x338($v1)
    ctx->pc = 0x120944u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 824), GPR_U32(ctx, 4));
    // 0x120948: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12094c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12094cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120950: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120954: 0xac640570  sw          $a0, 0x570($v1)
    ctx->pc = 0x120954u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1392), GPR_U32(ctx, 4));
    // 0x120958: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12095c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120960: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120964: 0xac640574  sw          $a0, 0x574($v1)
    ctx->pc = 0x120964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1396), GPR_U32(ctx, 4));
    // 0x120968: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12096c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12096cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120970: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120974: 0xac640578  sw          $a0, 0x578($v1)
    ctx->pc = 0x120974u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1400), GPR_U32(ctx, 4));
    // 0x120978: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x120978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12097c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120980: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120984: 0xac6407b0  sw          $a0, 0x7B0($v1)
    ctx->pc = 0x120984u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1968), GPR_U32(ctx, 4));
    // 0x120988: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12098c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12098cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x120990: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x120990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x120994: 0xac6407b4  sw          $a0, 0x7B4($v1)
    ctx->pc = 0x120994u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1972), GPR_U32(ctx, 4));
    // 0x120998: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x120998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12099c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x12099cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209a0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209a4: 0xac6407b8  sw          $a0, 0x7B8($v1)
    ctx->pc = 0x1209a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1976), GPR_U32(ctx, 4));
    // 0x1209a8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x1209a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1209ac: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209b0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209b4: 0xac640840  sw          $a0, 0x840($v1)
    ctx->pc = 0x1209b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2112), GPR_U32(ctx, 4));
    // 0x1209b8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209c0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209c4: 0xac640844  sw          $a0, 0x844($v1)
    ctx->pc = 0x1209c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2116), GPR_U32(ctx, 4));
    // 0x1209c8: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1209cc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1209ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1209d0: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x1209d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1209d4: 0xac640848  sw          $a0, 0x848($v1)
    ctx->pc = 0x1209d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2120), GPR_U32(ctx, 4));
    // 0x1209d8: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1209D8u;
    {
        const bool branch_taken_0x1209d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1209d8) {
            ctx->pc = 0x120B00u;
            return;
        }
    }
    ctx->pc = 0x1209E0u;
}
